#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*'5 adet fonksiyon yazın
'Kullanıcıya karakter dizisi girdiren bir fonksiyon yazın
'ilanıcının girdiği karakter dizisinin kaç elemanlı olduğunu bulan bir fonksiyon yazın
'Kullanıcının girdiği karakter dizisindeki boşlukları kaldıran bir fonksiyon yazın
'Karakter dizisindeki karakterlerin yerlerini sondan başa doğru yer değiştiren bir fonksiyon yazın
'Bir tane palendrom fonksiyonu yazın.Bu fonksiyon karakter dizisinin baştan sona ve
sondan başa yazımında aynı karakter dizisi olup olmadığını kontrol etsin.Eğer
öyleyse yani palendromsa 1 göndersin,palendrom değilse 0 göndersin
'Yukarıdaki fonksiyonları kullanarak kullanıcıdan bir karakter dizisi girmesini isteyen
daha sonra palendrom olup olmadığını ekrana bastıran bir C programı yazın*/


void numbersOfTheElements(char sentence[])
{
    int i = 0;
    int count = 0;

    while (sentence[i])
    {
        count++;
        i++;
    }
    printf("Number of elements in the sentence: %d\n", count);
}

void deleteTheSpaces(char sentence[])
{
    int i = 0;
    char newSentence[100];

    printf("String of characters without spaces: ");
    while (sentence[i])
    {
        if (sentence[i] != ' ')
        {
            newSentence[i] = sentence[i];
            printf("%c", newSentence[i]);
        }
        i++;
    }
}

void swapElements(char sentence[])
{
    int count = strlen(sentence);
    char newSentence[100];

    printf("\nSwap the characters: ");

    for (int j = 0; j <= strlen(sentence); j++, count--)
    {
        newSentence[j] = sentence[count];
        printf("%c", newSentence[j]);
        if (sentence[count] == ' ')
        {
            newSentence[j] = ' ';
            printf("%c", newSentence[j]);
        }
    }
}

int palyndrome(char sentence[])
{
    int length = strlen(sentence);
    
    for (int i = 0; i < length / 2; i++) {
        if (sentence[i] != sentence[length - i - 1]) {
            return 0;
        }
    }
    
    return 1;
}
int main()
{

    char sentence[100];

    printf("Please enter a sentence: ");
    gets(sentence);
    numbersOfTheElements(sentence);
    deleteTheSpaces(sentence);
    swapElements(sentence);
    int a = palyndrome(sentence);
    printf("\n%d", a);

    return 0;
}