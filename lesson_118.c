#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*'Üç adet ürünümüz var:Kitap,TemeI Gıda ve lüks 'Devlet her üç gruba farklı oranlarda vergi uyguluyor.
Kitap için %4.0, temel gıda için %5.6,Iüks ürün gammı için %19,6
'Her ürünün bir kodu var:Kitabın kodu O,temel gıdanın kodu 1,lüks ürünün kodu 2
'Kullanıcıdan istediğiniz ürünün kodunu ve fiyatını isteyen daha sonra
Switch case yapısını kullanarak son fiyatı ekrana bastıran bir C programı yazınız.*/

int main()
{
    double taxBook = 0.04;
    double taxFood = 0.56;
    double taxLuxury = 1.96;
    double cost;

    int noBook = 0, noFood = 1, noLuxury = 2;
    int selectedNum;

    printf("Please select a code: \nFor book: 0\nFor Food: 1\nFor Luxury: 2\n");
    scanf("%d", &selectedNum);
    printf("Please enter the cost: ");
    scanf("%lf", &cost);

    switch (selectedNum){
        case 0:
        cost+=cost*taxBook;
        break;
        case 1:
        cost+=cost*taxFood;
        break;
        case 2:
        cost+=cost*taxLuxury;
        break;
    }

    printf("The cost is: %lf", cost);

        return 0;
}