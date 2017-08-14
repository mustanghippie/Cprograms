#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int multbytwo(int x);
int square(int x);
void printnchars(char ch, int n);
long factorial(int n);
float celsius(float f);
float dicerolling();
int randrange(int n);
int randrange2(int m, int n);
void dicehistogram();

int main(){
	// Ex1
	printf("Ex 1---------------\n");
	int a[] = {1,2,3,4,5,6};
	int answer = 0;
	int count = sizeof a / sizeof a[0];


	for (int i = 0; i < count; ++i){
		answer += a[i];
	}

	printf("Ex1 answer = %d\n", answer);

    // EX2
	printf("\nEx 2---------------\n");
	for (int i = 1; i <= 10; ++i){
		printf("Ex2 %d  :  %d\n", i, multbytwo(i));
	}

    // EX3
	printf("\nEx 3---------------\n");
	for (int i = 1; i <= 10; ++i){
		printf("%d %d\n", i, square(i));
	}

    // EX4
	printf("\nEx 4---------------\n");
	printnchars('x', 5);

	// EX5
	printf("\nEx 5---------------\n");
	for(int i = 1; i <= 10; i++) {
		printf("%d: %ld \n", i, factorial(i));
	}

	// EX6
	printf("\nEx 6---------------\n");
	for(float f = -40; f <= 220; f+=10) {
		printf("%.0f ºF = %.2f ºC \n", f, celsius(f));
	}

	// EX7
	printf("\nEx 7---------------\n");
	printf("Avarage: %f \n", dicerolling());

	// EX8
	printf("\nEx 8---------------\n");
	int n = 5;
	int m = 2;
	printf("randrange: %d \n", randrange(n));
	printf("randrange2: %d \n", randrange2(m, n));	

	// EX9
	printf("\nEx 9---------------\n");
	dicehistogram();
	
	return 0;
}

int multbytwo(int x){
	int retval;
	retval = x * 2;

	return retval;
}

int square(int x){
	x *= x;
	return x;
}

void printnchars(char ch, int n) {
	for(int i = 0; i < n; i++) {
		printf("%c", ch);
	}
	printf("\n");
}

long factorial(int n) {
	if (n == 0) n = 1;
	else n *= factorial(n - 1);
	return n;
}

float celsius(float f) {
	return 5 * (f - 32) / 9;
}

float dicerolling() {
	int dice1, dice2;
	int a[13];
	float sum = 0;

	for(int i = 2; i <= 12; i++) {
		a[i] = 0;
	}

	for(int i = 0; i < 100; i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		a[dice1 + dice2] = a[dice1 + dice2] + 1;
	}

	
	for(int i = 2; i <= 12; i++) {
		printf("%d: %d \n", i, a[i]);
		sum += i * a[i];
	}
	
	return sum / 100.0;
}

int randrange(int n) {
	srand(time(NULL));

	return rand() % n + 1;
}

int randrange2(int m, int n) {
	srand(time(NULL));
	
	return rand() % (n - m + 1) + m;
}

void dicehistogram() {
	int i, dice1, dice2;
	int a[13];

	for(i = 2; i <= 12; i++) {
		a[i] = 0;
	}

	for(i = 0; i < 100; i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		a[dice1 + dice2] = a[dice1 + dice2] + 1;
	}

	for(i = 2; i <= 12; i++) {
		printf("%d: %d  ", i, a[i]);
		for(int j = 0; j < a[i]; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
}
