#include <stdio.h>
#include <string.h>
int main(){
    // Exercise 1
    printf("----- Exercise 1 -----\n");
    printf("Hello, world!\n\n");
    
    // Exercise 2
    printf("----- Exercise 2 -----\n");
    for(int i=0;i<10;i=i+2){
        printf("%d\n",i);   
    }
    printf("\n");
    
    for(int i=100;i>=0;i=i-7){
        printf("%d\n",i);
    }
    printf("\n");
    
    for(int i = 1; i <= 10; i = i + 1) { 
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 2; i < 100; i = i * 2) { 
        printf("%d\n", i);
    }
    printf("\n");

    // Exercise 3
    printf("----- Exercise 3 -----\n");
    for(int i=1;i<=10;i++){
        printf("%d    %d\n",i,i*i);
    }
    printf("\n");

    // Exercise 4
    printf("----- Exercise 4 -----\n");
    char star[12] = "*";
    for(int i=0;i<10;i++){
        printf("%s\n",star);
        strcat(star,"*");
    }


    return 0;
}
