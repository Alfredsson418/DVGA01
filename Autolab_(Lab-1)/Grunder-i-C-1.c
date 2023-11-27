#include <stdio.h>

// Skriv ett program som frågar användaren efter två heltal. Programmet skall sedan räkna ut summan, produkten och kvoten mellan de två talen och skriva ut resultaten på skärmen. Talen som mata in kommer alla vara heltal, och ert program ska endast skriva ut heltal. Divisionen kommer aldrig att ha en rest. 

int main() {

    int firstNum, secondNum;
    scanf("%i %i", &firstNum, &secondNum);

    printf("%i %i %i", firstNum + secondNum, firstNum * secondNum, firstNum / secondNum);

    return 0;
}