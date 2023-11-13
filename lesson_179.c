/*179. Pointer Yardımıyla Faktoriyel
Hesabı Yapan Program*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
    int num = 2;
    int *ptr;
    int last = 1;
    ptr = &last;
    for (int i = num; i > 0; num--, i--)
    {
        *ptr = (*ptr) * (num);
    }
    printf("%d ", last);

    return 0;
}