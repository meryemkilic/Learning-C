#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Bir çiftlikte tavşanların sayısı 1042 iken,kuşların sayısı
2272'dir.Bir yılda tavşanlar %3,8 oranında çoğalırken,kuşlar
%1,2 oranında çoğalmaktadır.Tavşanların kuşların sayısını
kaç yıl sonra geçeceğini bulan bir C programı yazınız.*/

int main()
{

    double rabbit = 1042;
    double bird = 2272;
    int count = 0;

    while (bird > rabbit)
    {
        rabbit += rabbit * 0.038;
        bird += bird * 0.012;
        count++;
    }
    printf("%d", count);
    return 0;
}