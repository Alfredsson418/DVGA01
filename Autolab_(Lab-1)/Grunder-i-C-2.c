#include <stdio.h>

// Skriv ett program som frågar användaren efter en bokstav i alfabetet mellan b och y och sedan skriver ut den bokstav som kommer före och efter. Bokstäverna ska vara små bokstäver, både i inmatning och utmatning. 

int main() {

    char ch;

    scanf("%c", &ch);

    printf("%c %c",ch -1, ch + 1);

}