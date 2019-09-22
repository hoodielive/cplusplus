#include <stdio.h>

int fun()
{
    for (int i = 1; i <= 5; ++i)
        printf("i is %d\n", i);
    return 0;
};

int code()
{
    int i = 7;
    char* s = "tells on everybody";
    printf("Egun Tupac %s\n", s);
    return 0;
}

int main(int argc, char ** argv)
{
    int x = printf("This is something!") * 5;
    printf("Um... what's up yo?\n");
    printf("printf returned %d\n", x);

    fun();
    code();
    return 0;
}
