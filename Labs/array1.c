#include <stdio.h>
#define N 4

struct student{
	char name[20];
	int eng;
	int math;
	int phys;
};

static struct student data[] = {
	{"Jack", 82, 72, 58},
	{"Young", 77, 82, 79},
	{"Steeve", 52, 62, 39},
	{"Mark", 61, 82, 88}
};

int main(void){
    
    int i;
    for(i=0; i<4; i++){
    	printf("%7s: Eng = %3d Math = %3d Phys = %3d\n",
    	data[i].name, data[i].eng, data[i].math, data[i].phys);
    }
    return (0);
}