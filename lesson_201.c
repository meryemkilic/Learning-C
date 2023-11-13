/*Bir buz pateni karşılaşmasında, bir yarışmacının performansı 6.00 üzerinden puanlanarak 10 hakem tarafından
değerlendirilmektedir.yarışnacının performans puanı ise hakemlerin vermiş olduğu en düşük ve en yüksek puan
atılıp, geri kalan puanların aritmetik ortlanası alınarak bulunmaktadır. Yazacağınız programda yarışmacının
adı, soyadı performans puanını hesaplayıp ekranda görüntüleyiniz. Performans hesaplamasını tek parametreli
bir fonksiyonda yapınız.Bü fonksiyon yarışmacıya ait yapıyı parametre olarak almalı ve performans puanını
hesaplayarak geri döndürmelidir.*/

#include <stdio.h>
#include <stdlib.h>

struct athlete
{
    char name[100], lastName[100];
    float scores[10];
    float result;
};
int calculateScore(struct athlete a)
{

    int max = 100;
    int min = 0;
    float result = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < a.scores[i])
        {
            max = a.scores[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (min > a.scores[i])
        {
            min = a.scores[i];
        }
        result += a.scores[i];
    }
    result = (result - max - min) / 8;
    return (result);
}

int main()
{

    struct athlete athlete1;

    printf("Please enter the athlete's name: ");
    scanf("%s", &athlete1.name);
    printf("Please enter the athlete's last name: ");
    scanf("%s", &athlete1.lastName);
    printf("Please enter the scores: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &athlete1.scores[i]);
    }

    athlete1.result = calculateScore(athlete1);

    printf("Athlete's name and surname: %s %s\n Athlete's score: %f", athlete1.name, athlete1.lastName, athlete1.result);
    return 0;
}