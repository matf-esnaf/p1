#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct staza{

  char naziv[51];
  char vrsta[21];
  int duzina;
  int otvorena;
};

void izracunavanje (int n, struct staza input[], char s[]);

int main(){

  int n;
  printf("Input: ");
  scanf("%d", &n);

  if(n<1 || n>100){
    printf("Output: -1.");
    return -1;
  }

  struct staza input[100];

  for(int i=0; i<n; i++){
    printf("Input n%d: ", i);
    scanf("%s", input[i].naziv);
    scanf("%s", input[i].vrsta);
    scanf("%d", &input[i].duzina);
    scanf("%d", &input[i].otvorena);
  }

  char s[21];

  printf("Input goal: ");
  scanf("%s", s);

  izracunavanje (n, input, s);

  return 0;
}

void izracunavanje (int n, struct staza input[], char s[]){

  float suma = 0;
  int brojac = 0;

  printf("Output: ");

  for(int i=0; i<n; i++){
    if((strcmp(s, input[i].vrsta))==0 && input[i].otvorena == 1){
      printf("%s", input[i].naziv);
      printf("\t");
    }
    if(input[i].otvorena == 1){
      suma+=input[i].duzina;
      brojac++;
    }
  }

  if(suma==0){
    printf("\nOutput:-1");
    exit(EXIT_FAILURE);
  }else{
    printf("\nOutput: %.2f.",suma/brojac);
    exit(EXIT_SUCCESS);
  }
}
