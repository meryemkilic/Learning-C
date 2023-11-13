#include <stdio.h>

/*Bir arabanın gittiği yolu mil cinsinden girdi olarak alan ve bunu km ye çeviren bir c programı yazın.(l
mil= 1.609 km)*/

int main(){
    int mil;

    printf("Enter the path the car traveled: ");
    scanf("%d", &mil);

    printf("The car traveled %d km.", mil*1609);

    return 0;
}