#include <stdio.h>
#define N 4

struct student{
	char name[20];
	int eng;
	int math;
	int phys;
	double mean;
};

static struct student data[] = {
	{"Jack", 82, 72, 58, 0.0},
	{"Young", 77, 82, 79, 0.0},
	{"Steeve", 52, 62, 39, 0.0},
	{"Mark", 61, 82, 88, 0.0}
};

int main(void){
    
    int i, j;
    for(i=0; i<N; i++){
    	
    	data[i].mean = (data[i].eng + data[i].math + data[i].phys) / 3.0;
    }

    for (int j = 0; j < N; j++){
    	printf("%7s: Eng = %3d Math = %3d Phys = %3d: Mean= %5.1f\n",
    	data[i].name, data[j].eng, data[j].math, data[j].phys, data[j].mean);
    }

    return (0);
}