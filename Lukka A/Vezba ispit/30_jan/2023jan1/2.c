#include <stdio.h>
#include <string.h>
#include <ctype.h>

void primena (char s[], char s1[]);

int main(){

  char s[31];
  char s1[31] = "";

  printf("Input: ");
  while(scanf("%s", s) != EOF){
    primena(s, s1);
  }

  printf("\nOutput: %s", s1);

  return 0;
}

void primena (char s[], char s1[]){

  int d = strlen (s);

  for(int i=0; i<d; i++){
    if(tolower(s[i])!='a' && tolower(s[i])!='e' && tolower(s[i])!='i' && tolower(s[i])!='o' && tolower(s[i])!='u'){
      return;
    }
  }

  strcat(s1, s);
  strcat(s1, " ");
}
