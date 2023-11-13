#include <stdio.h>

/*Kullanıcıdan 3 farklı tam sayı girmesini İsteyen, kullanıcının girdiği bu sayıları okuyup
sayıların en küçüğünü ve en büyüğünü ekrana bastıran programın C kodunu yazınız.*/

int main()
{
    int a, b, c;
    int max, min;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    max = a;
    if (c > max)
    {
        max = c;
    }
    if (b > max)
    {
        max = b;
    }

    min = a;
    if (c < min)
    {
        min = c;
    }
    if (b < min)
    {
        min = b;
    }

    printf("Max Value is: %d \nMin Value is: %d", max, min);
    return 0;
}