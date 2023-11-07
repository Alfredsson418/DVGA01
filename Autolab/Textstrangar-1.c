#include <stdio.h>

/*
Skriv ett program som läser in en textsträng från användaren. Programmet ska sedan kolla hur många gånger texten ab återfinns i texten. Tänk på att eftersom texten kan innehålla mellanslag behöver den eventuellt läsas in med fgets istället för scanf. Se föreläsningsanteckningarna i föreläsning 2 för instruktioner hur man gör det. 
*/

int main() {

    char list[101];

    char check[2] = "ab";

    int total = 0;

    fgets(list, 100, stdin);

    for(int i = 0; i < 101; i++) {
        if (list[i] == 'a' && list[i+1] == 'b') {
            total += 1;
        }

    }

    printf("%i", total);


}