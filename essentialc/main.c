#include <stdio.h>

extern void func();
extern int var;

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
};

int mysteryOfIdentifier()
{
    for (int i = 1; i <= 5; ++i)
    {
        static int number = 7;
        register int number2 = 7;
        printf("number is %d\n", number++);
        printf("number2 is %d\n", number2++);
    }
    return 0;
};

void funcPoint()
{
    int x;
    x = 1;
    // int y = x;

    int *ip;  // integer pointer
    ip = &x; // address of object x

    int y = *ip; // copy
    printf("And the pointer *ip is: %d\n", y);
};

int main(int argc, char ** argv)
{
    int x = printf("This is something!") * 5;
    printf("Um... what's up yo?\n");
    printf("printf returned %d\n", x);
    fun();
    code();
    mysteryOfIdentifier();
    printf("The number from the external var is: %d\n", var);
    func();
    funcPoint();
    return 0;
}
