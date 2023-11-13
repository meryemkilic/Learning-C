#include <stdio.h>
/*İngiliz alfabesinden herhangi bir büyük veya küçük harfi ch
değişkenine okuyan ve bu harfin alfabede kaçıncı harf
olduğunu bulan bir C programı yazınız.(ipucu: Büyük harf
için (int)ch-(int)'A'+1,küçük harf için (int)ch-(int)'a'+l
ifadelerini kullanabilirsiniz.*/

int main()
{
    char c;
    printf("Please enter a char: ");
    scanf("%c", &c);
    int order=0;

    if ((c >= 'A') && (c <= 'Z'))
    {
        order = (int)c - (int) 'A' +1;
    }
    else if ((c >= 'a') && (c <= 'z'))
    {
        order = (int)c  - (int)'a' +1;
    }

printf("%d", order);
return 0;
}