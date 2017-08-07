#include <stdio.h>

int factorial(int val){
    
    int rVal = val - 1;

    if(val == 1) return 1;

    return val*factorial(rVal);
}

int fibonacci(int val){
    int f;

    if(val<=0) return 0;
    if(val == 1 || val ==2) return 1;
    f = (fibonacci(val-1)+fibonacci(val-2));
    return f;
}

int bunnyEars2(int val){
    if(val == 0) return 0;
    if(val % 2 == 1) return 2 + bunnyEars2(val - 1);
    return 3 + bunnyEars2(val - 1);

}

int powerN(int base, int n){
    if(n == 1) return base;
    return base * powerN(base,n-1);
}

int sumDigits(int val){
    
   if(val < 10) return val;
   return (val % 10)+sumDigits(val/10);

}

int main(){
    
    // Exercise 1
    printf("----- Exercise 1 -----\n");
    int count = 0;
    for(int i=1;i<=10;i++){
        if(i>3) count++;
    }
    printf("count = %d\n", count);
    
    // Exercise 2
    int sum = 0;
    printf("----- Exercise 2 -----\n");
    float average = 0.0;
    for(int i=1;i<=10;i++){
        sum += (i*i);
    }
    
    average = sum / 10.0;
    printf("average = %f\n",average);

    printf("----- Exercise 3 -----\n");
    for(int i=1;i<=10;i++){
        if(i%2 == 1) printf("%d is odd\n",i);
        if(i%2 == 0) printf("%d is even\n",i);
    }
    // Exrcise 4
    printf("----- Exercise 4 -----\n");
    int printVal;
    int answerEx4 = 1;
    
    scanf("%d",&printVal);

    for(int i=1;i<=printVal;i++){
        answerEx4 *= i;
    }
    printf("The factorial of %d is %d\n",printVal,answerEx4);

    // Exrcise 5
    printf("----- Exercise 5 -----\n");
    int f0=1;
    int f1=1;
    int fn;
    
    scanf("%d",&printVal);
    
    for(int i=1;i<=printVal;i++){
        fn = f0+f1;
        printf("%d + %d = %d\n", f0,f1,fn);
        f0 = f1;
        f1 = fn;
    }

    // Recursion 1
    printf("----- Recursion 1 -----\n");
    int factorialVal;
    printf("input factorial\n");
    scanf("%d",&factorialVal);
    printf("Factorial = %d\n", factorial(factorialVal));
    
    // Recursion 2
    printf("----- Recursion 2 -----\n");
    int fibonacciVal;
    printf("input fibonacci\n");
    scanf("%d",&fibonacciVal);

    printf("Fibonacci count = %d\n", fibonacci(fibonacciVal));
    
    // Recursion 3
    printf("----- Recursion 3 -----\n");
    int bunnyVal;
    printf("input bunny value\n");
    scanf("%d",&bunnyVal);

    printf("Bunny -> %d\n", bunnyEars2(bunnyVal));

    // Recursion 4
    printf("----- Recursion 4 -----\n");
    int base;
    int n;
    printf("input base\n");
    scanf("%d",&base);
    printf("input n\n");
    scanf("%d",&n);

    printf("powerN(%d, %d) = %d\n",base,n,powerN(base,n));


    // Recursion 5
    printf("----- Recursion 5 -----\n");
    int digitVal;
    printf("input value for sumdigits\n");
    scanf("%d",&digitVal);

    printf("sumDigits %d = %d\n",digitVal, sumDigits(digitVal));


    
    return 0;


}
