#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void inputFile(char *filename);
void dispStatistics(FILE *fp);

int main(int argc, char *argv[]) {
	char *filename = argv[1];
	// printf("%s ", argv[0]);
	
	inputFile(filename);

	return 1;
}

void inputFile(char *filename) {
	FILE *fp = fopen(filename, "r");

	if(fp) {
		char date[255] = {'\0'};
		time_t timer = time(NULL);
		struct tm *timeptr = localtime(&timer);
		strftime(date, 255, "%a %b %d %T %Z %Y", timeptr);

		printf("started on %s \n\n", date);
		printf("Input file: %s \n\n", filename);

		dispStatistics(fp);

		fclose(fp);
	} else {
		printf("%s doesn't exist \n", filename);
	}
}

void dispStatistics(FILE *fp) {
	char line[255];
	char *ret;
	char word[255];
	int pos;
	// count
	int imageCount = 0;
	int lineToCount = 0;
	int endCount = 0;
	int printCount = 0;
	int drawCount = 0;
	int translateCount = 0;
	int childCount = 0;
	int commentCount = 0;

	while(fgets(line, 255, fp) != NULL){
		ret = strstr(line," ");
		pos = ret - line;
		strncpy(word, line, pos);
		word[pos] = '\0';

		if (strcmp(word, "Image") == 0){
			imageCount++;
			continue;
		}
		
		if (strcmp(word, "lineTo") == 0){
			lineToCount++;
			continue;
		}

		if (strcmp(word, "End") == 0){
			endCount++;
			continue;
		}

		if (strcmp(word, "print") == 0){
			printCount++;
			continue;
		}

		if (strcmp(word, "draw") == 0){
			drawCount++;
			continue;
		}

		if (strcmp(word, "translate") == 0){
			translateCount++;
			continue;
		}

		if (strcmp(word, "child") == 0){
			childCount++;
			continue;
		}

		if (strcmp(word, "#") == 0){
			commentCount++;
			continue;
		}		
	}

	printf("%d Image definition(s)\n\n", imageCount);
	printf("%d lineTo command(s) within Figures\n\n", lineToCount);
	printf("%d End command(s)\n\n", endCount);
	printf("%d print command(s)\n\n", printCount);
	printf("%d draw command(s)\n\n", drawCount);
	printf("%d translate command(s)\n\n", translateCount);
	printf("%d child command(s)\n\n", childCount);
	printf("%d comment(s)\n\n", commentCount);

	// // Check the file size
	// fseek(fp, 0, SEEK_END);
	// long fsize = ftell(fp);
	// fseek(fp, 0, SEEK_SET);

	// char *str = malloc(fsize + 1);
	// fread(str, fsize, 1, fp);

	// const char s[2] = " ";
	// char *token = strtok(str, s);
	// printf("token: %s \n", token);

// 	while( token != NULL ) {
//		printf( " %s\n", token );
//		token = strtok(NULL, s);
//	}

}
