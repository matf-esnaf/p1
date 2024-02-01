#include <stdio.h>
#include <string.h>

#define max 100

void f (int n, int a[max][max]);

int main(){

  int n;
  printf("Input: ");
  scanf("%d", &n);

  if(n<1 || n>max){
    printf("Output:-1");
    return -1;
  }

  int a[max][max];

  printf("Matrix:\n");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &a[i][j]);
    }
  }
  
  int k;
  printf("Input: ");
  scanf("%d", &k);

  if(k<1){
    printf("Output:-1");
    return -1;
  }

  for(int i=0; i<k; i++){
    f (n, a);
  }

  printf("Output:\n");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void f (int n, int a[max][max]){

   for(int i=0; i<n; i++){
    int temp = a[i][0]; 
    for(int j=0; j<n; j++){
          a[i][j] = a[i][j+1];
      }
	  a[i][n-1]=temp;
   }
}
