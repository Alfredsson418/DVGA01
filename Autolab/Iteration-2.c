#include <stdio.h>

// Skriv ett program som läser in ett årtal och undersöker om årtalet är ett skottår. Ett år är ett skottår om det är jämnt delbart med 400 eller med (4 men inte med 100). Endast en if-sats får användas. 

int main() {

    int input;
    scanf("%i", &input);

    // printf("%i %i %i \n", (input % 400 == 0), (input % 4 == 0), (input % 100 != 0));
    // printf("%i", (input % 400 == 0) || (input % 4 == 0) && (input % 100 != 0));

    if ((input % 400 == 0) || (input % 4 == 0) && (input % 100 != 0)) {
        printf("t");

        return 0;
    }

    printf("f");
    return 0;
}