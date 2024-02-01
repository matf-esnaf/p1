#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;

  printf("Input: ");
  scanf("%d", &n);

  if(abs(n)<10){
    printf("Output:-1");
    return -1;
  }

  int sum1=1, sum2=0;

  for(int n1=abs(n), i=0; n1!=0; i++, n1/=10){
    int c = n1 % 10;
    if(i%2==0){
      sum1*=c;
    }else if(i%2!=0){
      sum2+=c;
    }
  }

  printf("Output: %d %d ", sum1, sum2);
 if(sum1==sum2){
    printf("true.");
    return 0;
  }else{
    printf("false.");
  }

}
