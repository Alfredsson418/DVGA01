#include <stdio.h>

// Du ska skriva ett program som tar emot två listor som inmatning, och adderar talen i dessa två listor på respektive position. D.v.s. a[0] + b[0], a[1] + b[1].... Först så matas antalet tal i varje lista in, och sedan matas första listan in, därefter den andra. 

int main() {

    int len, input;

    scanf("%i", &len);

    int list1[len + 1], list2[len + 1];

    for (int i = 0; i < len; i++){
        scanf("%i", &input);
        list1[i] = input;
    }
    for (int i = 0; i < len; i++){
        scanf("%i", &input);
        list2[i] = input;
    }
    for (int i = 0; i < len; i++){
        printf("%i\n", list1[i] + list2[i]);
    }

    return 0;
}