/*Bir öğrenci evinde öğrenciler salonu halıyla kaplatmak istemektedir.Döşenecek halının metrekaresi 40
TYdirAyrıca halıcı salonu döşemek için 200 Tİ İşçilik almaktadır.Buna göre metrekareyi girdi olarak
alan ve halıcıya ödenmesi gereken toplam tutarı hesaplayan bir C programı yazınız.
*/

#include <stdio.h>

int main(){
    int a;
    int cost;

    printf("Please enter the m^2 you need: ");
    scanf("%d", &a);

    cost= 200 + a*40;

    printf("The cost is %d", cost);


    return 0;
}