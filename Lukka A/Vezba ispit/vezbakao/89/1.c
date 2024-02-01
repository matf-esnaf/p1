#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct tacka{

	char naziv[20];
	int x;
	int y;
};

void monster (struct tacka unos[], int n);

int main(){

	struct tacka unos[20];
	int n;

	printf("Input:\n");
	scanf("%d", &n);
	if(n<1 || n>100){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}
	for(int i=0; i<n; i++){
		scanf("%s", unos[i].naziv);
		scanf("%d", &unos[i].x);
		scanf("%d", &unos[i].y);
	}

	monster (unos, n);

	exit(EXIT_SUCCESS);
}

void monster (struct tacka unos[], int n){

	double min=0;
	char c1[20]="";
	char c2[20]="";

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(j>=n){
				break;
			}
			double current = sqrt ( pow (unos[i].x - unos[j].x, 2) + pow (unos[i].y - unos[j].y, 2 ) );
			if(current < min || min==0){
				min=current;
				strcpy (c1, unos[i].naziv);
				strcpy (c2, unos[j].naziv);
			}
		}
	}
	printf("\nOutput:");
	printf("\n%s & %s\n", c1, c2);
}
