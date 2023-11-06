#include <stdio.h>

// Låt användaren skriva in 5 heltalsvärden och avgör om de är udda eller jämna. Om talet är udda, skriv ut odd, om talet är jämt skriv ut even. 

int main() {

    int num[5];

    scanf("%i %i %i %i %i", &num[0], &num[1], &num[2], &num[3], &num[4]);

    for (int i = 0; i < 5; i++) {

        if (num[i] % 2) {
            printf("odd\n");
        } else {
            printf("even\n");
        }

    }

    return 0;

}

