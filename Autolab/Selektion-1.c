#include <stdio.h>

// Skriv ett program som läser in ett flyttal brutto (=bruttoinkomst) och beräknar netto (=nettoinkomst). Grundformeln för beräkningen är: netto = brutto - brutto × skattesats där skattesatsen låg (30%) gäller för brutto<=204000 och hög (50%) för överstigande inkomst. 

int main() {

    float brutto, netto, skattesats;

    scanf("%f", &brutto);

    if (brutto <= 204000) {
        netto = brutto - (brutto * 0.30);
    } else {
        netto=brutto-(204000*0.30+(brutto-204000)*0.50);
    }

    printf("%f", netto);

    return 0;


}