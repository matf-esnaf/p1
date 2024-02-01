#include <stdio.h>
#include <math.h>

int monster (int n);

int main(){

  int n;

  printf("Input: ");
  scanf("%d", &n);

  if(n<0){
    printf("Output: -1.");
    return -1;
  }

  if(monster(n)==1){
    printf("Output: YES.");
    return 0;
  }else{
    printf("Output: NO.");
    return -1;
  }
}

int monster (int n){

  int digits=0;

  for(int n1=n; n1!=0; n1/=10){
    digits++;
  }

  int sum=0;

  for(int n1=n; n1!=0; n1/=10){
     int d = n1 % 10;
     sum += pow(d, digits);
     }

  if(n==sum){
    return 1;
  }

  return 0;
}
