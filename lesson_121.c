#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen cümlenin harflerini alt alta yazdırın.

int main(){

char sentence[100];
    int i = 0;

    printf("Please enter a sentence: ");
    gets(sentence);

    while (sentence[i])
    {
        printf("%c\n", sentence[i]);
        i++;
    }

    return 0;
}