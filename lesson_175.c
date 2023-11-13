#include <stdio.h>
#include <stdlib.h>
#define n 5

/*175. Pointer Kullanarak Sayı Dizinin
Elemanlarını Alma ve Console a
Bastırma*/

int main(){

    int array[n];
    int *ptr;
    ptr=array;
    printf("Please enter elements of array:\n ");
    
    for (int i=0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    
    ptr=array;
    for (int i = 0; i < n; i++)
    {
        printf("%d    ", *ptr);
        ptr++;
    }
    
    return 0;
}