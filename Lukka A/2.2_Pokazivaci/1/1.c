#include <stdio.h>
#include <stdlib.h>

void uredi(int *pa, int *pb) {
  int pom;
  if (*pa > *pb) {
    pom = *pa;
    *pa = *pb;
    *pb = pom;
  }
}

int main() {
  int a, b;
  printf("Unesite dva broja:");
  scanf("%d%d", &a, &b);

  uredi(&a, &b);
  printf("Uredjene promenljive: %d, %d\n", a, b);

  exit(EXIT_SUCCESS);
}

