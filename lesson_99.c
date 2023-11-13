/*A ve B değişkenlerine iki tamsayıyı girdi olarak alan ve yerini değiştiren bir C programı yazınız*/

#include <stdio.h>

int main(){
    int a=5;
    int b=10;
    int temp=a;
    a=b;
    b=temp;
    printf("After the swap: \n The a is: %d. The b is: %d", a,b);
    return 0;
}

