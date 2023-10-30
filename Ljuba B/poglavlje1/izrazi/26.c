#include <stdio.h>

int main() {
    float a, b, c;
    printf("Unesite tri cela broja: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Aritmeticka sredina: %.2f\n", (a + b + c) / 3);
}
