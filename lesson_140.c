#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bilgisayar tarafından rastlege üretilen N adet sayı bir dizide tutulqaktadır.Buna göre aşağıda verilen
fonksiyon prototipini kullanarak dizi elemanlarının küçükten büyüğe '*Oğru sıralanmasını sağlayan C programını
fonksiyon olarak yazınız.*/

void Sort(int array[])
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
}

int main()
{
    int array[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
        printf("%d\t", array[i]);
    }
    printf("\n");
    Sort(array);
    return 0;
}