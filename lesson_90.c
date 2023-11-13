#include <stdio.h>

/*Kullanıcı tarafından girilen reel bir sayının aşağıda verilen f fonksiyonuna göre f(r)
değerini hesaplayıp döndüren bir program yazınız.
f(r)= x^3+ 13x^2 + 47x + 5*/

int main()
{
    int x;
    int f;

    printf("Please enter a number: ");
    scanf("%d", &x);

    f= x*x*x + 13*x*x + 47*x +5;

    printf("The result is: %d", f);


    return 0;
}