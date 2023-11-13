#include <stdio.h>

//Kullanıcıdan girmesini İstediği a, b, c ve x değerlerini kullanarak aşağıdaki aritmetik 
//işlemin sonucunu hesaplayan ve ekrana basan C programım yazınız.
//ax^2+bx+c

int main(){
    int a;
    int b;
    int c;
    int x;

    printf("Please enter four numbers for 'a', 'b', 'c' and 'x': ");
    scanf("%d%d%d%d", &a, &b, &c, &x);
    printf("a: %d, b: %d, c: %d, x: %d", a, b, c, x);
    printf("The result is: %d ", a*x*x+b*x+c);

return 0;
}

