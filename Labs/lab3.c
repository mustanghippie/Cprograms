#include <stdio.h>

void swap(int *p1, int *p2){
    printf("Swap: %d\n",*p1);
}

void arrayTest(int *demonstrateArray){
    int arrayNumber = sizeof demonstrateArray / sizeof demonstrateArray[0];
    printf("Memory size of array in arrayTest: %d\n", arrayNumber);
}


void print_addr(int x){
    printf("The address of x in print_addr:%p\n ", &x);
}

int new_integer(){
    int x;
    x = 10;
    printf("X address: %p\n ", &x);
    return x;

}

void print_array(int *array, int arrayNumber){
    for (int i = 0; i < arrayNumber; ++i){
        printf("array[%d] = %d\n", i, *(array+i));
    }
}

void pointerTest(int *);

int main(){
    // Ex1
    printf("Ex 1---------------\n");
    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    
    // EX2
    printf("\nEx 2---------------\n");
    int demonstrateArray[] = {1,2,3,4,5};
    int arrayNumber = sizeof demonstrateArray / sizeof demonstrateArray[0];

    printf("Memory size of array in main: %d\n",arrayNumber);
    arrayTest(demonstrateArray);

    // EX3
    printf("\nEx 3---------------\n");
    int arr[] = {10,20,30,40};
    arrayNumber = sizeof arr / sizeof arr[0];

    for(int i=0;i<arrayNumber;i++){
        printf("*(arr+%d) = %d\n", i, *(arr+i));
    }

    // EX4
    printf("\nEx 4---------------\n");
    x = 1;

    printf("The address of x in main: %p\n", &x);
    print_addr(x);

    // EX5
    printf("\nEx 5---------------\n");
    // int xPoint;
    // new_integer();
    //printf("X = %d\n", xPoint);

    // EX6
    int ex6Array[] = {10,20,30,40,50};
    int ex6ArrayNumber = sizeof ex6Array / sizeof ex6Array[0];

    print_array(ex6Array, ex6ArrayNumber);
    // pointerTest(&x);
    // printf("Value X = %d\n", x);
    // printf("Address X in main = %p\n", &x);
    

}

void pointerTest(int *x){
    *x = 999;
    printf("Address X in pointerTest = %p\n", x);
}
