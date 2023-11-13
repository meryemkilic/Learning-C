/*(a) Kullanıcının gircligi 2 tam sayıdan, ilkinin ikincisi ile karşılaştırıp eşit olup olmadığını,
program yazın. Orııek ekran görüntüsü aşağıda verilmiştir.
(b) Yazdığınız programı birinci sayının ikincinin katı olup olmadığını ekrana bastıracak
şekilde değiştirin. Modulo (Yo) operatöriinii kullanabilirsiniz.*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Please enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("The numbers are eaquals.\n");
    }
    else
    {
        printf("The numbers are not eaquals.\n");
    }

    if(b%a==0||a%b==0){
        printf("The first number is twice the other number.");
    }

    return 0;
}