#include <stdio.h>

/*'Bir telefon şiYketi telefonda 3 dakikaya kadar konuşmanın
ücretini 0,25 TL olarak belirlemiştir.Ancak şirket,konuşma süresi
3 dakikayı aştığı durumda bundan sonraki her dakika için ek
olarak 0,08 TL almaktadır.Telefon görüşmesinin süresini dakika
cinsinden girdi olarak alan ve konuşmanın ücretini hesaplayan
bir C programı yazınız.
Örnek Çıktı
Telefon konuşma süresi: 8.0
Ucret:0,65*/

int main(){

    float talkDuration= 8.0;
    float cost;
    if(talkDuration<3){
        cost= 0.25;
    } else if(talkDuration>3){
        cost= (talkDuration-3)*0.08 + 0.25;
    }
    printf("Talk Duration: %f\n The cost: %f", talkDuration, cost);

    return 0;
}