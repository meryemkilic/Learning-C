#include <stdio.h>

/*while döngüsünü kullanarak aşağıda çıktısı görünen programı yazın.
Sayı: 23
23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1*/

int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);

    for(int i=a; i>0; i--){
        printf("%d  ", i);
    }
    return 0;
}