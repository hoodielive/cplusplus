#include "chmod.h"

class Mask {
private:
    mode_t removal_mask;  //the bits that will be removed
    mode_t applying_mask; //the bits that will be set

public:
    Mask()
        : removal_mask(0)
        , applying_mask(0)

    {

    }

    Mask& operator |=(const Mask& other)
    {
        removal_mask |= other.removal_mask;
        applying_mask |= other.applying_mask;

        return *this;
    }

    mode_t& get_removal_mask() { return removal_mask; }
    mode_t& get_applying_mask() { return applying_mask; }
};

Optional<Mask> string_to_mode(char access_scope, const char*& access_string);
Optional<Mask> apply_permission(char access_scope, char permission, char operation);

int main(int argc, char** argv)
{
    if (argc < 3) {
        printf("usage: chmod <octal-mode> <path,...>\n"
               " 			 chmod [[ugoa][+-=][rwx...],...] <path,...>\n");
        return 1;
    }

    Mask mask;

    /* compute a mask */
    if (argv[1][0] >= '0' && argv[1][0] <= '7') {
        if (sscanf(argv[1], "%ho", &mask.get_applying_mask()) != 1) {
            perror("sscanf");
            return 1;
        }
        mask.get_removal_mask() = ~mask.get_applying_mask();
    }
    else
    {
        const char* access_string = argv[1];

        while (*access_string != '\0') {
            Optional<Mask> tmp_mask;
            switch (*access_string) {
            case 'u':
                tmp_mask = string_to_mode('u', ++access_string);
                break;
            case 'g':
                tmp_mask = string_to_mode('g', ++access_string);
            case 'o':
                tmp_mask = string_to_mode('o', ++access_string);
            case 'a':
                tmp_mask = string_to_mode('a', ++access_string);
            case '=':
            case '+':
            case '-':
                tmp_mask = string_to_mode('a', ++access_string);
                break;
            case ',':
                ++access_string;
                continue;
            }
            if (!tmp_mask.has_value()) {
                fprintf(stderr, "chmod: invalid mode: %s\n", argv[1]);
                return 1;
            }
            mask |= tmp_mask.value();
        }
    }

    /*set the mask for each files' permissions */
    struct stat current_acces;
    int i = 2;
    while (i < argc) {
        if (stat(argv[i], &current_acces) != 0) {
            perror("stat");
            return 1;
        }

        /* found the minimal CNF by the Quine-McCluskey algorithm and use it */

        mode_t mode = mask.get_applying_mask()
                | (current_acces.st_mode & ~mask.get_removal_mask());
        if (chmod(argv[i++], mode) != 0) {
            perror("chmod");
        }
    }

    return 0;
}

Optional<Mask> string_to_mode(char access_scope, const char*& access_string)
{
   char operation = *access_string;

   if (operation != '+' && operation != '-' && operation != '=') {
       return {};
   }

   Mask mask;
   if (operation == '=') {
       switch (access_scope) {
       case 'u':
           mask.get_removal_mask() = (S_IWUSR | S_IXUSR);
           break;
       }
   }
}



































