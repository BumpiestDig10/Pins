#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * ptr;

    ptr = fopen("6DigitPins.txt", "w");

    if(ptr == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    for(int i = 0; i <= 9; i++)
    {
        fprintf(ptr, "00000%d\n", i);
    }

    for(int i = 10; i <= 99; i++)
    {
        fprintf(ptr, "0000%d\n", i);
    }

    for(int i = 100; i <= 999; i++)
    {
        fprintf(ptr, "000%d\n", i);
    }

    for(int i = 1000; i <= 9999; i++)
    {
        fprintf(ptr, "00%d\n", i);
    }

    for(int i = 10000; i <= 99999; i++)
    {
        fprintf(ptr, "0%d\n", i);
    }

    for(int i = 100000; i <= 999999; i++)
    {
        fprintf(ptr, "%d\n", i);
    }

    fclose(ptr);
}