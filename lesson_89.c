/*3. Kullanıcının girdiği bir n sayısına kadar olan tiiın tanı sayıların toplamını hesap-
layıp düzgiİıı bir şekilde ekrana bastıran bir program yazın.*/

#include <stdio.h>
int main()
{
    int a;
    int sum=0;

    printf("Please enter a number: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        sum+=i;
        printf("%d + ", i);
    }
    printf("= %d", sum);

    return 0;
}