#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 10;
    char letter = 'A';
    float f = 100.6;
    double d = 109.9089;
    int size;

    printf("Value of f is %f\n", f);
    printf("Address of f is %f\n", &f);

    size = sizeof(letter);
    printf("Size of d is %d.\n", size);
}