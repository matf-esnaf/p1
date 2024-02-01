#include <stdio.h>

int pozivanje (int x);

int main(){

  int n;
  printf("Input: ");
  scanf("%d", &n);

  int maks = 0;
  int maks1;

  for(int i=0; i<n; i++){
    int x;
    printf("Input n%d: ", i);
    scanf("%d", &x);
    int temp = pozivanje (x);
    if(temp>maks || maks==0){
      maks=temp;
      maks1 = x;
    }
  }

  printf("Output: %d.", maks1);

  return 0;
}

int pozivanje (int x){

  int sum1 = 0;
  int sum2 = 0;

  for(; x!=0; x/=10){
    int c1 = x % 10;
    if(c1 % 2 == 0){
      sum1 += c1;
    }else{
      sum2 += c1;
    }
  }

  return sum1 - sum2;

}
