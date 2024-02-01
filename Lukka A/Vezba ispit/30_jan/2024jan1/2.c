#include <stdio.h>
#include <string.h>
#include <ctype.h>

int brojac = 0;

int f (char s[], char s1[]);

int main(){

  char s[21], s1[106];

  printf("Input:\n");

  int max = -1;

  while(scanf("%s", s) != EOF){
    int temp = f (s, s1);
    if(temp>max){
      strcpy(s1, s);
      max = temp;
    }
  }

  if(brojac!=0){
    printf("\nOutput: %d %s.", max, s1);
    return 0;
  }else{
    printf("\nOutput: false.");
    return -1;
  }

}

int f (char s[], char s1[]){

  int d = strlen (s);
  int sum = 1;
  int imalibrojeva = 0;

  for(int i=0; s[i]!='\0'; i++){
    if(isdigit(s[i])){
      sum*=s[i]-'0';
      brojac++;
      imalibrojeva++;
    }
  }

  if(imalibrojeva==0){
    return -1;
  }

  return sum;
}
