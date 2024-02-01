#include <stdio.h>
#include <strings.h>

int main(){

  int n;

  printf("Input: ");
  scanf("%d", &n);

  if(n<1 || n>100){
    printf("Output: -1");
    return -1;
  }

  printf("Matrix:\n");
  int a[20][20];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &a[i][j]);
    }
  }

  int sum1 = 0;

  for(int i=0, j=0; i<n; i++, j++){
      sum1+=a[i][j]*a[i][n-1];
  }

  printf("Output: %d.", sum1);

  return 0;
}
