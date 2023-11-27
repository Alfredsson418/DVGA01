#include <stdio.h>
#include <stdbool.h>

// Skriv ett program där användaren matar in tal, och programmet adderar det inmatade talet till en summa. Vid varje inmatning skrivs summan ut. Programmet avslutas när användaren matar in 0. 

int main() {
    int input, total = 0;
    while (true) {
        scanf("%i", &input);
        if (input == 0) { return 0; }
        total += input;
        printf("%i\n", total);
        

    }
    
}