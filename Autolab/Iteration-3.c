#include <stdio.h>

// Skriv ett program som läser in n heltalsvärden från användaren och sedan skriver ut det största och det minsta av de angivna talen. n ska anges med en konstant som sätts till 10. 

#define n 10

int main() {

    int input;
    scanf("%i", &input);

    int high = input;
    int low = input;

    for (int i = 1; i < n; i++) {

        scanf("%i", &input);
        
        if (input > high) {
            high = input; 
        } else if (input < low) { 
            low = input; 
        }

    }

    printf("%i %i", high, low);

    return 0;
}