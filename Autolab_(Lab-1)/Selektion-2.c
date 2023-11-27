#include <stdio.h>

// Skriv ett program som låter användaren välja bland tre språk, svenska, engelska och tyska genom att ange bokstaven s, e eller t (både gemener och versaler ska fungera). Skriv ut hej på det språk som användaren valt. Du ska använda en switch-sats för att avgöra vad som ska skrivas ut. Se nedan för vad hej heter på de olika språken. 

int main() {

    char sprak;

    scanf("%c", &sprak);


    switch (sprak)
    {
    case 101: case 69: // e
        printf("hello");
        break;

    case 116: case 84: // t
        printf("hallo");
        break;
    
    case 115: case 83: // s
        printf("hej");
        break;
    
    default:
        break;
    }


    return 0;
}