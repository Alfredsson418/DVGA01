#include <stdio.h>
#include <math.h>

// Den här uppgiften går ut på att skriva ett program som räknar ut standardavvikelsen för alla tal i en lista. Först matas antalet talet i listan in, sen matas varje tal in. Programmet ska skriva ut standardavvikelsen för talen i listan. Notera, värdena som matas in i programmet är del av ett stickprov, vilket man kan behöva ta i beaktan när man väljer metod för att beräkna standardavvikelsen. 

int main() {

    int len;
    float input;

    scanf("%i", &len);

    float list[len - 1];

    for (int i = 0; i < len; i++){
        scanf("%f", &list[i]);
    }

    float sum = 0;

    for (int i = 0; i < len; i++){
        sum += list[i];
    }

    float medel = sum/len;

    float powSum = 0;

    for (int i = 0; i < len; i++) {
        powSum += pow(list[i] - medel, 2);
    }

    float stdav = sqrt(powSum/(len-1));

    printf("%f", stdav);

    return 0;

}