#include <stdio.h>
#include <stdlib.h>
#define n 5

/*176. Pointer Kullanarak Yeni Diziye İlk
Dizinin Elemanlarını Kopyalama*/

void addElements(int array[], int *ptr, int newArray[]){
ptr=array;
for (int i = 0; i < n; i++)
{
    newArray[i]=*ptr;
    ptr++;
}
}


int main(){

int array[n]={1,2,3,4,5};
int newArray[n];
int *ptr;

addElements(array,ptr,newArray);
for (int i = 0; i <n; i++)
{
    printf("%d  ", newArray[i]);
}


    return 0;
}