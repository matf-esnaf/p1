#include <stdio.h>
#include <string.h>

struct ukras{

  char oblik[21];
  char boja[21];
  int broj;
};

int monster (int n, struct ukras input[], int wn, char wc[]);

int main(){

  int n;

  printf("Input: ");
  scanf("%d", &n);

  if(n<1 || n>50){
    printf("Output: -1.");
    return -1;
  }

  struct ukras input[50];

  for(int i=0; i<n; i++){
    printf("Item n%d: ", i);
    scanf("%s", input[i].oblik);
    scanf("%s", input[i].boja);
    scanf("%d", &input[i].broj);
  }

  int wn;
  char wc[21];
  
  printf("Goal: ");
  scanf("%d", &wn);
  scanf("%s", wc);

  printf("Output: %d.", monster (n, input, wn, wc));

  return 0;
}

int monster (int n, struct ukras input[], int wn, char wc[]){

  int broj=0;

  for(int i=0; i<n; i++){
    if(strcmp(wc, input[i].boja)==0)
      if(wn<=input[i].broj){
        broj++;
      }
  }

  return broj;
}
