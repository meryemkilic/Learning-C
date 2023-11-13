#include <stdio.h>
#include <math.h>

/*int ussunuAl(int x, int y)
{

    int sonuc = pow(x, y);
    return sonuc;
}

int main()
{
    int x = 4;
    int y = 5;
    int sonuc= (ussunuAl(x,y));
    printf("Sonuç %d", sonuc);
}*/

void ussunuAl(int *sonuc, int x, int y){

*sonuc= pow(x,y);

}

int main(){
    int x=4;
    int y= 5;
    int sonuc;
    ussunuAl(&sonuc, x, y);
    printf("Sonuç: %d", sonuc);

}