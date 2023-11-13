#include <stdio.h>

/*Kullanıcı tarafından girilen iki tam sayının çarpımının işaretini, sayıları çarpmadan bulan
bir program yazın.*/

int main()
{
    int x,y;

    printf("Please enter two numbers: ");
    scanf("%d%d", &x, &y);

    if(x>0 & y>0){
        printf("The result is positive.");
    } else if((x<0 & y>0)|| (x>0 & y<0)){
        printf("The result is negative.");
    } else if(x<0 & y<0){
        printf("The result is positive.");
    } else if(x*y==0){
        printf("The result is 0.");
    }

    return 0;
    }