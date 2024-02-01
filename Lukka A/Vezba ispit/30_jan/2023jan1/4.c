#include <stdio.h>
#include <string.h>

struct rectangle{

  int lenght;
  int width;
  char color[30];
};

int main(){

  int n;
  printf("Intput: ");
  scanf("%d", &n);

  if(n<1 || n>100){
    printf("Output: -1");
    return -1;
  }

  struct rectangle input[100];

  for(int i=0; i<n; i++){
    printf("Intput n^%d: ", i);
    scanf("%d %d %s", &input[i].lenght, &input[i].width, input[i].color);
  }

  int glenght, gwidth; 
  printf("Input goal: ");
  scanf("%d %d", &glenght, &gwidth);

  int garea = glenght * gwidth;
  int max = -1;
  char goal[30];

  for(int i=0; i<n; i++){
    int area = input[i].lenght*input[i].width;
    if(area<garea){
      if(area>max){
        max=area;
        strcpy(goal, input[i].color);
      }
    }
  }
  
  if(max==-1){
    printf("Output: none.");
    return -1;
  }else{
    printf("Output: %s.", goal);
  }

}
