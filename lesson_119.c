#include <stdio.h>
#include <stdlib.h>

/*Bir cümledeki kelime sayısını bulan programı yazınız.*/

int main()
{
    char sentence[100];
    int length = sizeof(sentence) / sizeof(sentence[0]);
    int count = 0;

    printf("Please enter a sentence: ");
    gets(sentence);

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == 32)
        {
            count++;
        }
    }

    printf("The number of the words: %d", count + 1);

    return 0;
}