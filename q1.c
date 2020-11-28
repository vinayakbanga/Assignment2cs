//C program to print alphabets from a to z

#include <stdio.h>

int main()
{
    char alphabets;

    printf("Alphabets from a - z are: \n");
    for(alphabets='a'; alphabets<='z'; alphabets++)
    {
        printf("%c ", alphabets);
    }

    return 0;
}