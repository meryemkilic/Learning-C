/*Bilgisayar zarafzndan rastgele uzetilen N adet sayı biz dizide tutulmaktadır. Dizi içerisindeki
maksimum ve minimumun değerlerin iki ayrı fonksiyon kullanarak bulunmasını sağlayan C programını yazınız*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void findMaxMin(int array[], int n)
{
    int i = 0;
    int max=-1;
    int min=101;
    for(int i=0; i<n; i++)
    {
        if(array[i]<min){
            min= array[i];
        }
        if(array[i]>max){
            max=array[i];
        }
        
    }
    printf("\nThe max value is: %d\nThe min value is: %d",max,min);
}

int main()
{
    int n;
    printf("Please enter, how many numbers to be created?\n");
    scanf("%d", &n);

    int array[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        printf("%d\t", array[i]);
    }

    findMaxMin(array,n);
}
