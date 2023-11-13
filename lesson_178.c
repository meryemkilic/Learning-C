/*'Pointer yardımıyla dizideki elamanların en büyük ve
en küçük değerini bulun
*/
#include <stdio.h>
#include <stdlib.h>
#define n 5

void findMax(int array[], int *ptr){
    int max=0;
for (int i = 0; i < n; i++)
{
    if(*ptr>max){
        max=*ptr;
    }
    ptr++;
}
printf("The maximum value is: %d\n", max);

}
void findMin(int array[], int *ptr){
int min=100;
for (int i = 0; i < n; i++)
{
    if(*ptr<min){
        min=*ptr;
    }
    ptr++;
}
printf("The minimum value is: %d\n", min);
}


int main()
{
    int array[n] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = array;
    findMax(array, ptr);
    findMin(array, ptr);

    return 0;
}