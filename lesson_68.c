#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char array1[]= "bonne";
    char array2[]= "soiree";
    char sonuc[100]= "";

    strncpy(sonuc, array1,3);
    strncpy(sonuc+3, array2, 5);
    printf("%s", sonuc);

}