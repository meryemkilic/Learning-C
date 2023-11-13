#include <stdio.h>

/*while döngüsü kullanarak 0 ile kullanıcıdan aldığı n sayısı arasında yer alan 17 'nin tüm
tam sayı katlarını ekrana bastıran bir program yazınız.
Programınızı her satırda 10 adet sayı olacak şekilde düzenleyin.*/

int main()
{

    int a;

    printf("Please enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 17 == 0)
        {
            printf("%d ", i);
            if (i % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}