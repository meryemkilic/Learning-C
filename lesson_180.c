/*180. Pointer Kullanarak Dizi
Elemanlarınının Yerdeğiştirilmesi*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

void swapElements(int array[], int *ptr1)
{
    int *ptr2;
    ptr1=array;
    ptr2=array[n];
    for (int i = 0; i < n; i++)
    {
        ptr1=
        ptr2=ptr1;
     ptr1++;
     ptr2--;   
    }
}

int main()
{

    int array[n] = {1, 2, 3, 4, 5};
    int *ptr1;
    swapElements(array, ptr1);
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", array[i]);
    }
    return 0;
}