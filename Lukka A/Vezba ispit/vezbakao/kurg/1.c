#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct krug{

	char oznaka;
	char boja[20];
	double r;
};

void monster (struct krug unos[], int n, char s[]);

int main(){

	struct krug unos[20];
	int n;
	char s[20];

	printf("Input:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf(" %c", &unos[i].oznaka);
		scanf("%s", unos[i].boja);
		scanf("%lf", &unos[i].r);
	}
	scanf("%s", s);

	monster (unos, n, s);

	exit(EXIT_SUCCESS);
}

void monster (struct krug unos[], int n, char s[]){

	char c = '\0';
	double maks=0;

	for(int i=0; i<n; i++){
		double area = M_PI * pow ((unos[i].r), 2);
		if(strcmp(s, unos[i].boja)==0){
			if(area>maks){
				maks=area;
				c=unos[i].oznaka;
			}
		}
	}

	printf("\n%c\n", c);
}
