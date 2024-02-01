#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book{

  int id;
  char name[50];
  char genre[20];
  int num;
};

void load(struct book input[], int n);
int take(struct book input[], int n, char gname[]);
int max(struct book input[], int n);

int main(){
  
  int n;
  printf("Intput: ");
  scanf("%d", &n);

  if(n<1 || n>50){
    printf("Output: -1");
    return -1;
  }

  struct book input[50];

  load(input, n);

  char gname[50];
  printf("Input goal: ");
  scanf("%s", gname);

  if((take(input, n, gname))==0){
    printf("Output: -1");
    return -1;
  }

  int maxim = max(input, n);

  printf("Output: %d, %s, %d.", input[maxim].id, input[maxim].name, input[maxim].num);

  return 0;
}

void load(struct book input[], int n){

  for(int i=0; i<n; i++){
    printf("Input n^%d: ", i);
    scanf("%d %s %s %d", &input[i].id, input[i].name, input[i].genre, &input[i].num);
    if(input[i].num==0){
      printf("Output: -1");
      exit(EXIT_FAILURE);
    }
  }
}

int take(struct book input[], int n, char gname[]){

  for(int i=0; i<n; i++){
    if(strcmp(input[i].name, gname) == 0){
      input[i].num--;
      return 1;
    }
  }

  return 0;
}

int max (struct book input[], int n){

  int maxim = -1;
  int maxi;

  for(int i=0; i<n; i++){
    if(input[i].num>maxim){
      maxim=input[i].num;
      maxi = i;
    }
  }
  
  return maxi;
} 
