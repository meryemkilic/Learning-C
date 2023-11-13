/*
1
2 3 
4 5 6
7 8 9 10
11 12 13 14 15*/

#include <stdio.h>
#include <stdlib.h>

void FloydRectangle(int limit){

    int lastNum=1;
    for (int i = 0; i < limit+1; i++)
    {
        for (int j=0; j < i; j++)
        {
            printf("%d  ",lastNum);
        lastNum++;
        }
        printf("\n");
    }
}
int main(){
    int limit = 5;
    FloydRectangle(limit);
    return 0;
}
