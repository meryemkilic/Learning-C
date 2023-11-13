/*Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide tutulmaktadır.
Dizi içerisine dizi sıra numarası belirterek klavyeden alınan bir tamsayının
ilgili sıraya eklenmesini sağlayan C programını fonksiyon olarak yazınız*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int n = 12;
    int order = 8;
    int value = 6;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        printf("%d\t", array[i]);
    }
    printf("\n\n");

    for (int i = n ; i >= order - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[order - 1] = value;

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}