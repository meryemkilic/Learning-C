#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[2][3] = {{3, 2, 1}, {1, 1, 1}};
    int secondArray[2][3] = {{0, 0, 1}, {5, 1, 1}};
    int lastArray[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            lastArray[i][j] = array[i][j] + secondArray[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %3d", lastArray[i][j]);
        }
    }
    return 0;
}