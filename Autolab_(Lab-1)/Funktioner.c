#include <stdio.h>
#include <math.h>

void calc(float param1, float param2, char operator) {

    switch (operator)
    {
    case '+':
        printf("%g", param1 + param2);
        break;
    
    case '-':
        printf("%g", param1 - param2);
        break;

    case '*':
        printf("%g", param1 * param2);
        break;

    case '/':
        if (param2 == 0) { 
            printf("NaN");
        } else {
            printf("%g", param1 / param2);
        }
        break;

    case '^':
        printf("%i", (int) pow((double) param1,param2));
        break;
    default:
        break;
    }

}

int main() {

    float firstNum, secondNum;
    char operator;

    scanf("%f %c %f", &firstNum, &operator, &secondNum);

    calc(firstNum, secondNum, operator);

    return 0;
}

