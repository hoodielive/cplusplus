#include "stdio.h"

void missle()
{
    char ch = 'A';

    printf("The character %c has the character code %d.\n", ch, ch);

    for (; ch <= 'Z'; ++ch)
        printf("%2c", ch);
}


