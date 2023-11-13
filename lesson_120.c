#include <stdio.h>
#include <stdlib.h>

// Bir cümledeki karakter sayısını bulan programı yazınız.

int main()
{
    char sentence[100];
    int i = 0;

    printf("Please enter a sentence: ");
    gets(sentence);

    while (sentence[i])
    {
        i++;
    }

    printf("The number of the words: %d", i);

    return 0;
}