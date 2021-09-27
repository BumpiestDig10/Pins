#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * ptr;

    ptr = fopen("2DigitPins.txt", "w");

    if(ptr == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    for(int i = 0; i <= 9; i++)
    {
        fprintf(ptr, "0%d\n", i);
    }

    for(int i = 10; i <= 99; i++)
    {
        fprintf(ptr, "%d\n", i);
    }

    fclose(ptr);
}