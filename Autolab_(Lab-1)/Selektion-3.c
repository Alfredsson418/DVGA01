#include <stdio.h>
#include <stdbool.h>

// Skriv ett program som tar emot ett tal n från användaren. Programmet beräknar sedan värdet 1+2+3… tills summan överstiger n. Då ska summan samt det senast adderade talet skrivas ut. 

int main() {

    int n, summa = 0, i = 0;

    scanf("%i", &n);


    while(true) {
        i += 1;

        summa += i;

        if (summa > n) {
            break;
        }


    }
    printf("%i %i", summa, i);

    return 0;
}