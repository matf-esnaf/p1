#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, s, t;

  printf("Input: ");
  scanf("%d %d %d", &n, &s, &t);

  if(n<1 || n>99999){
    printf("Output: -1.");
    EXIT_FAILURE;
  }
  if(n<s || n<t){
    printf("Output: -1.");
    EXIT_FAILURE;
  }

  if(n==s){
    printf("Output: 0.");
    EXIT_SUCCESS;
  }
  if(n==t){
    printf("Output: 1.");
    EXIT_SUCCESS;
  }

  int x0 = t;
  int x1 = s + t;

  for(int i=2; x0+x1<=n; i++){
    if(x0+x1==n){
      i++;
      printf("Output: %d.", i);
      EXIT_SUCCESS;
    }
    int temp = x1;
    x1 = x0 + temp;
    x0 = temp;
  }

  EXIT_FAILURE;
}
