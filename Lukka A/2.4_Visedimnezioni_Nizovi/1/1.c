#include <stdio.h>

int uslov (int m, int n);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m , &n);

	if(uslov(m, m)==0){
		printf("\n-1\n");
		return -1;
	}

	int s[m][n];

	printf("Elements: ");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &s[i][j]);
		}
	}

	printf("\nMatrica:\n");

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int uslov (int m, int n){

	if(n<1 || n>50 || m<1 || m>50){
		return 0;
	}

	return 1;
}
