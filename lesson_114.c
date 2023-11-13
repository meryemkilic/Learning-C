#include <stdio.h>
#include <math.h>

/*Bir pozitif tamsayı olan n değeri ile bir reel sayı olan x değerini
girdi olarak alan ve 1/xA2 +3/xA4+5/xA6+7/xA8+....+2n-1/xA2n
serisini hesaplayan program yazınız.
Örnek Çıktı
Pozitif tamsayı: 3
Reel sayi:1.0
Seriz 9.00*/

int main(){

double n= 3;
double x= 1;
double sum;

for(int i=1; i<=n; i++){
    sum+= (2*i-1)/pow(x,2*i);
}
printf("%lf", sum);
    return 0;
    
}