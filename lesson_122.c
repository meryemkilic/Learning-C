/*Klavyeden girilen bir kelimenin harflerini bir harf arttırarak aşağıdaki gibi yazan C programını yazınız
Kelime giriniz: canan
c
c a
c a n
c a n a
c a n a n
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char word[100];
    int i = 0;

    printf("Please enter a word: ");
    gets(word);

    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", word[j]);
        }
        printf("\n");
    }

    return 0;
}