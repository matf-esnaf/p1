#include <stdio.h>
#include <string.h>

#define max 11
#define min 1

void monster (int a[max][max], int b[max][max], int n);

int main(){

  int n;

  printf("Input: ");
  scanf("%d", &n); 

  if(n<min || n>=max){
    printf("Output:-1.");
    return -1;
  }

  int a[11][11];
  int b[11][11];

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &a[i][j]);
    }
  }

  monster (a, b, n);

  printf("Output:\n");

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void monster (int a[max][max], int b[max][max], int n){

  for(int i=0; i<n; i++){
    for(int j=0, k=n-1; j<n; j++, k--){
      b[i][j]=a[k][i];
    }
  }
}
