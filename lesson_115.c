#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define value 150
/*Bir sınıfta bulunan öğrencilerden hangisinin boyunun 150 cm 'ye en yakın olduğunu hesaplayan bir program yazınız.
Bu program öğrenci numaralarını ve santimetre cinsinden boy uzunluklarını girdi olarak almalıdır.
Oğrencı numarası negatif bir sayı girilinceye kadar veri girişi devam etmelidir.*/

int main()
{
    int nearest = 0;
    int height;
    int no = 1;
    int exactNo = 0;

    while (no > 0)
    {
        printf("Please enter a student no: ");
        scanf("%d", &no);
        printf("Please enter the student's height: ");
        scanf("%d", &height);

        if (abs(value - height) < abs(value - nearest))
        {
            nearest = height;
            exactNo = no;
        }
    }
    printf("The students no: %d \nHer/His height: %d", exactNo, nearest);

    return 0;
}