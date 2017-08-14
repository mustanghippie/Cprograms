#include <stdio.h>
#include <stdlib.h>

int getline1(char line[], int max);
int getline2(char str[], int max);

int main(){
	// Ex1
	printf("Ex 1---------------\n");
	printf("Ex 1 type : \n");
	char c;
	// while((c = getchar()) != EOF) {
	// 	printf("%c", c);
	// }

	// Ex2
	printf("Ex 2---------------\n");
	printf("Ex 2 type : \n");
	const int MAXLINE = 255;
	char str[MAXLINE];
	// while(getlinetest(str, MAXLINE) != EOF) {
	// 	printf("Output : \n");
	// 	printf("%s\n", str);
	// }

	// printf("Ex 3---------------\n");
	printf("Ex 3 type num: \n");
	getline2(str, MAXLINE);
	printf("Output integer : %d \n", atoi(str));


	return 0;
}

int getline1(char line[], int max) {
	int nch = 0;
	int c;
        max = max - 1;  // leave room for ‘\0’
	
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			break;
		}
		if(nch < max) {
			line[nch] = c;
			nch++;
		}
	}

	if(c == EOF && nch == 0) {
		return EOF;
	}

	line[nch] = '\0';
	return nch;
}

int getline2(char str[], int max) {
	int c;
	int i = 0;
	while (--max > 0 && (c=getchar()) != EOF && c != '\n') {
		str[i++] = c;
	}
	if (c == '\n') {
		str[i++] = c;
	}
	str[i] = '\0';
	return i;
}