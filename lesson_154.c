#include <stdio.h>
#include <stdlib.h>

/*'2 adet fonksiyon yazın
•l.fonksiyon: Girilen sayının 2 nin katı olduğunu gösterir
•2.fonksiyon: Girilen sayının 3 ün katı olduğunu gösterir
'Bu iki fonksiyonu kullanarak bir C programı yazın.Bu program
kullanıcının girdiği değerin çift olup olmadığını 3 ün katı olup
olmadığını,6 nın katı olup olmadığını belirlesin ve ekrana yazdırsın.
'Aynı C programını fonksiyonu değişkenin adresiyle çağırıp yazın.
'Örnek program çıktısı aşağıdaki gibidir.*/

void bolunebilirlik(int *a)
{
    if (*a % 2 == 0)
    {d
        if (*a % 6 == 0)
        {
            printf("\n%d is multiple of six.\n", *a);
        }
        else
        {
            printf("\n%d is multiple of two.\n", *a);
        }
    }
    else if (*a % 3 == 0)
    {
        printf("%d is multiple of three. \n", *a);
    }
}

int main()
{
    int a;
    printf("Enter a nummber: ");
    scanf("%d", &a);
    bolunebilirlik(&a);
    return 0;
}