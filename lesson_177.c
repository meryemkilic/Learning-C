#include <stdio.h>
#include <stdlib.h>
#define n 5
/*177. Pointer Kullanarak Sayı
Dizisinde Aranılan Elemanın Kaçıncı
Pozisyonda Olduğunu Bulan Program*/

void findPosition(int array[], int *ptr, int searchedValue){

for (int i = 0; i < n; i++)
{
    if(*ptr==searchedValue){
        printf("%d ", i);
    }
    ptr++;
}

}

int main(){
    int array[n]={1,2,3,4,5};
    int *ptr;
    int searchedValue=3;
    ptr=array;
    findPosition(array, ptr, searchedValue);


    return 0;
}