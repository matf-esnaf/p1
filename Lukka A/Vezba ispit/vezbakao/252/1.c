#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lopta{

	char boja[20];
	double r;
	double cena;
};

void monster (struct lopta unos[], int n, char s[], int x);

int main(){

	struct lopta unos[20];
	int n, x;
	char s[20];

	printf("Input:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", unos[i].boja);
		scanf("%lf", &unos[i].r);
		scanf("%lf", &unos[i].cena);
	}

	scanf("%s", s);
	scanf("%d", &x);

	monster (unos, n, s, x);

	exit(EXIT_SUCCESS);
}

void monster (struct lopta unos[], int n, char s[], int x){

	double maksr=0;

	for(int i=0; i<n; i++){
		if(strcmp(s, unos[i].boja)==0){
			if(unos[i].r>maksr){
				if(x>unos[i].cena){
					maksr=unos[i].r;
				}
			}
		}
	}
	if(maksr==0){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}else{
		printf("\n%lf\n", maksr);
		exit(EXIT_SUCCESS);
	}
}
