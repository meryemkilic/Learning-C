/*Her sayının kendinden önceki sayı ile toplanması sonucu oluşan sayı dizisine Fibonacci dizisi adı verilmektedi
Buna göre klavyeden kaç adet fibonacci sayısı üretileceği bilgisi girilerek sayıların üretilmesini sağlayan c
programını fonksiyon kullanarak yazınız*/

#include <stdio.h>
#include <stdlib.h>

void FibonacciArray(int limit){

    int lastNum=0;

    for(int i=0; i<limit; i++){
        printf("%d ", i+lastNum);
        lastNum=i;
    }
}
int main(){

int limit;

printf("Please enter, how many Fibonacci numbers to be generated?");
scanf("%d", &limit);

    FibonacciArray(limit);

    return 0;
}
