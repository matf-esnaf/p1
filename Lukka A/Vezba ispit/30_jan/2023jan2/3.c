#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define min 1
#define max 50

int matrica (int s[max][max], int n, int k, int p); 

int main(){

  int n, k, p;
  int s[max][max];

  printf("Intput: ");

  scanf("%d", &n);
  n++;

  if(n<min || n>max){
    printf("Output: -1.");
    exit(EXIT_FAILURE);
  }

  scanf("%d", &k);

  if(k>n){
    printf("Output: -1");
    exit(EXIT_FAILURE);
  }

  scanf("%d", &p);

  printf("Matrix:\n");

  for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){
      scanf("%d", &s[i][j]);
    }
  }

  printf("Output: %d.", matrica (s, n, k, p));

  return 0;
}

int matrica (int s[max][max], int n, int k, int p){

  int suma = 0;

  for(int i=1; i<n; i++){
    int brojac = 0;
    int temp = suma;
    for(int j=1; j<n; j++){
      if(s[i][j]>p){
        brojac++;
      }
    }
    if(brojac>=k){
      suma+=i;
    }
  }

  return suma;
}
