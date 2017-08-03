#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

unsigned long ToDec(const char str[ ]){
    short i = 0;
    short n;
    unsigned long x = 0;
    char c;

    while (str[i] != '\0') {
        if ('0' <= str[i] && str[i] <= '9') n = str[i] - '0';
        else if ('a' <= (c = tolower(str[i])) && c <= 'f') n = c - 'a' + 10;
        else exit(0);
        i++;

        x = x * 16 + n;
    }
    return (x);
}

int main(){
    // Question 1
    int decimalArray[3] = {12,185,294};;
    int binary = 0;
    int devideValue = 1;
    printf("---- Question 1 ----\n");
    
    for(int i=0;i<sizeof(decimalArray)/sizeof(int);i++){
        printf("Decimal = %d\n",decimalArray[i]);
        while(decimalArray[i] > 0){
            binary = binary + (decimalArray[i] % 2) * devideValue;
            decimalArray[i] = decimalArray[i] / 2;
            devideValue = devideValue * 10;
        }
        // answer
        printf("Binary = %d\n\n",binary);
        // reset
        binary = 0;
        devideValue = 1;
    }
    

    // Question 2
    printf("---- Question 2 ----\n");
    int binaryArray[3] = {101101,11101011,1010};

    int countValue = 1;
    int decimal = 0;

    for(int i=0;i<sizeof(binaryArray)/sizeof(int);i++){
        printf("Binary = %d\n",binaryArray[i]);
        while(binaryArray[i]>0){
            decimal += (binaryArray[i]%2)*countValue;
            binaryArray[i] = binaryArray[i] /10;
            countValue *= 2;
        }
        // answer
        printf("Decimal = %d\n\n",decimal);
        // reset
        countValue = 1;
        decimal = 0;
        
    }

    // Question 3
    printf("---- Question 3 ----\n");
    char hexadecimalCharArray[16] = "0123456789ABCDEF";
    char answerCharArray[8];
    int decimalArray2[3] = {138,119,59};
    int remainder = 0;
    int count = 0;

    for(int i=0;i<sizeof(decimalArray2)/sizeof(int);i++){
        printf("Decimal = %d\n",decimalArray2[i]);
        while(decimalArray2[i]>0){
            remainder = decimalArray2[i] % 16;
            decimalArray2[i] /= 16;
            answerCharArray[count] = hexadecimalCharArray[remainder];
            count++;
        }
        count--;
        printf("hexadecimal = 0x");
        
        // answer
        for(int i=count;i>=0;i--){
            printf("%c",answerCharArray[i]);
        }
        printf("\n\n");

        //reset
        remainder = 0;
        count = 0;
    }

    // Question 4
    printf("---- Question 4 ----\n");

    char hexadecimalArray[3][4] = {"1A","3F31","31C"};
    // answer    
    for(int i=0;i<3;i++){
        printf("0x%s = %lu\n", hexadecimalArray[i], ToDec(hexadecimalArray[i]));
    }

    // Question 5
    printf("---- Question 5 ----\n");
    long  binaryArray3[3] = {10010111,101101111110,1111};
    int answerCharCount = 0;
    count = 0;
    int value = 0;
    int countUp = 1;
    for(int i=0;i<sizeof(binaryArray3)/sizeof(long);i++){
        printf("Binary = %lu\n",binaryArray3[i]);
        while(binaryArray3[i]>0){
            
            while(count<4){
                value += (binaryArray3[i] % 2) * countUp;  
                count++;
                countUp *= 2;
                binaryArray3[i] /= 10;
            }
            
            answerCharArray[answerCharCount] = hexadecimalCharArray[value];
            answerCharCount++;
            // reset
            count = 0;
            value = 0;
            countUp = 1;

        }
        answerCharCount--;

        printf("Hexadecimal = ");
        while(answerCharCount>=0){
            printf("%c",answerCharArray[answerCharCount]);
            answerCharCount--;
        }
        printf("\n\n");
        answerCharCount = 0;
    }

    // Question 6
    char hexadecimalArray2[3][6] = {"1A3B","ABCD","111111"};


    return 0;
}


