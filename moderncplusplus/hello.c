#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char z[100];

    printf("Please enter some text: ");
    scanf("%s", z); 
    fgets(z, 100, stdin);
    printf("This is the text: %s", z);
    
    return 0; 
}