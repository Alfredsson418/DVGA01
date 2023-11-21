#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ARR_SIZE 100
#define RANDOM_MIN 0
// Needs to be 901 higher to be able to generate 900
#define RANDOM_MAX 901

void printArr(int * arr) {
    // Prints out every number
    printf("=============================================");
    for (int i = 0; i < ARR_SIZE; i++) {

        // For every 10 number, a new line is created
        if (i % 10 == 0) {
            printf("\n");
        }

        printf("%3d ", arr[i]);
    }

    printf("\n=============================================\n");
}

int generateArr(int * arr) {


    // Adds random number to array
    for (int i = 0; i < ARR_SIZE; i++) {
        // This is some kind of standard that is used for generating numbers between a upper and lower limmit
        arr[i] = (rand() % RANDOM_MAX + RANDOM_MIN);

    }
    
    printArr(arr);
    
    return 0;
}


int bubbleSort(int * arr) {
    // temp varible when switching numbers
    int temp;

    bool swapped;


    // If numbers have swapped, do-while loop will be true and keep swapping numbers unit everything is sorted.
    do {
        swapped = false;
        for (int i = 0; i < ARR_SIZE - 1; i++) {
            
            if (arr[i] > arr[i + 1]) {

                temp = arr[i]; 
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;

            }

        }

    } while (swapped);

    return 0;
}

int arrayInfo(int * arr) {

    // first max and min
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < ARR_SIZE; i++) {

        if (arr[i] > max) {
            max = arr[i]; 
        } else if (arr[i] < min) { 
            min = arr[i]; 
        }

    }

    float summa = 0;
    float medel;

    for (int i = 0; i < ARR_SIZE; i++) {
        summa += (float)arr[i];
    }
    // går inte dela int på int så att det blir en float/double
    medel = summa/(float)ARR_SIZE;

                // index 50 and 49
    float median = (float)(arr[ARR_SIZE/2] + arr[ARR_SIZE/2 -1]) / 2;

    printf("Max: %d\nMin: %d\nMedelvärde: %f\nMedian: %f\n", max, min, medel, median);

    return 0;

}

int binarySearch(int * arr, int num) {

    int min = 0;

    int max = ARR_SIZE;

    // If min is higher than max, num does not exist, this can happen when middle + or - 1
    while (min <= max) {

        int middle = (max - min)/2 + min;

        if (num > arr[middle]) {

            min = middle + 1;

        } else if (num < arr[middle]) {

            max = middle - 1;

        } else if (num == arr[middle]) {

            printf("%d ihttades på rad %d och kolumn %d\n", num, (int)(middle/10) + 1, (middle % 10) + 1);
            return 1;
        } 


    }
    printf("Existerar inte\n");
    return -1;

}


int main() {

    bool createdArray = false;
    bool sortedArray = false;

    // Use current time as 
    // seed for random generator 
    srand(time(0)); 


    int arr[ARR_SIZE];



    char svar;
    printf("1. Generera talfoljd \n2. Sortera tal foljd \n3. Berakna medel, median, max och minvarde \n4. Sok i talfoljd \n0. Avsluta\n");

    while (true) {


        scanf(" %c", &svar);

        switch (svar)
        {
        case '0':
            // Program exists
            return 1;

        case '1':
            generateArr(arr);
            createdArray = true;
            break;

        case '2':
            if (!createdArray) { printf("Talföljden har inte generetats\n"); break;}
            bubbleSort(arr);
            printArr(arr);
            sortedArray = true;
            break;
        
        case '3':
            if (!createdArray) { printf("Talföljden har inte generetats\n"); break;}
            if (!sortedArray) { printf("Talföljden har inte sorterats\n"); break;}
            arrayInfo(arr);
            break;

        case '4':
            if (!createdArray) { printf("Talföljden har inte generetats\n"); break;}
            if (!sortedArray) { printf("Talföljden har inte sorterats\n"); break;}
            int guess = 0;
            printf("Nummer: ");
            scanf("%d", &guess);
            binarySearch(arr, guess);
            break;

        default:
            printf("1. Generera talfoljd \n2. Sortera tal foljd \n3. Berakna medel, median, max och minvarde \n4. Sok i talfoljd \n0. Avsluta\n");
            break;
        }

    }

}