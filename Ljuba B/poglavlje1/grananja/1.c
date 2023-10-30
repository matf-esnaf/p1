#include <stdio.h>

int main() {
    int a, b, c;
    printf("Unesite tri cela broja: ");
    scanf("%d %d %d", &a, &b, &c);

    int minimalni = a;

    if(b < minimalni) {
        minimalni = b;
    }

    if(c < minimalni) {
        minimalni = c;
    }

    printf("Najmanji: %d\n", minimalni);
}
