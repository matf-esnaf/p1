#include <stdio.h>
#include <stdlib.h>

#define max 50
#define min 1

void change (int a[max][max], int m, int n, int k, int t);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m, &n);
	
	if(m<min || m>max || n<min || n>max){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}

	int a[max][max];

	printf("Maxtrix:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	int k, t;

	printf("\nIndex: ");
	scanf("%d %d", &k, &t);

	if(k>m || k<0 || k>50){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}

	change (a, m, n, k, t);

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}

	exit(EXIT_SUCCESS);
}

void change (int a[max][max], int m, int n, int k, int t){

	for(int j=0; j<n; j++){
		int temp = a[k][j];
		a[k][j]=a[t][j];
		a[t][j]=temp;
	}	
}
