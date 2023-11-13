#include <stdio.h>
    /*Kullanıcıdan aldığı tam sayı kenar uzunlukları (a,b) ve yükseklik (h) bilgisini kullana-
rak bir dikdörtgen prizmanın sırasıyla taban alanını, yanal alanlarınm toplamını, top-
lam alanını ve hacmini ekrana bastıran programın C kodunu yazınız. Ornek ekran çıktısı
aşağıda verilmiştir.*/

int main(){
    int a, b, h;

    printf("Please enter three number: ");
    scanf("%d%d%d", &a, &b, &h);

    printf("Volume is %d\n", a*b*h);
    printf("Yanal alan: %d\n" , 2*a*h + 2*h*b);
    printf("Yuzey alani: %d\n", 2*(a*b+a*h+b*h));


    return 0;
}