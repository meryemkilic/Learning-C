#include <stdio.h>

/*Kullanıcıdan istenen sayının birler ve onlar basamağındaki sayıyı bulunuz.*/

int main(){
    int a;

    printf("Please enter a number: ");
    scanf("%d", &a);
    
    int birlerBasamagi= a%10;
    int onlarBasamagi= a%100/10;
     
    printf("Birler basamagi: %d. Onlar basamagi: %d. ", birlerBasamagi, onlarBasamagi);

    return 0;
}