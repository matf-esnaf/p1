#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  int n;

  printf("Intput: ");
  scanf("%d", &n);

  if(n<1 || n>100){
    printf("Output: -1.");
    return -1;
  }

  int s[101];
  int suma = 0;

  for(int i=0; i<n; i++){
    scanf("%d", &s[i]);
    suma+=s[i];
    if(s[i]<=0){
      printf("Output: dont know.");
      return -1;
    }
  }

  suma = abs(suma);
  int indeks = suma / n; 

  while(suma%n!=0 || suma!=0){
    if(s[indeks]>0){
      s[indeks]--;
      suma--;
    }else{
      s[indeks]++;
      suma++;
    }
  }

  printf("Output: ");
  for(int i=0; i<n; i++){
    printf("%d ", s[i]);
  }

  return 0;
}
