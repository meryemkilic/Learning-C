/*Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide tutulmaktadır.
Dizi içerisinde istenilen bir değerin dizideki sıra numarası girilerek ilgili sırada bulunan dizi
değerinin silinmesini sağlayan C programını fonksiyon kullanarak yazınız*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void removeElements(int array[], int index, int n)
{

    for (int i = index; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    for (int j = 0; j < n - 1; j++)
    {
        printf("%d     ", array[j]);
    }
}

int main()
{
    int n;
    int index;
    printf("Please enter, how many numbers to be created?\n");
    scanf("%d", &n);
    printf("Please enter, which element of the array do you want to delete?\n");
    scanf("%d", &index);

    int array[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        printf("%d\t", array[i]);
    }
    printf("\n");
    removeElements(array, index, n);
}
