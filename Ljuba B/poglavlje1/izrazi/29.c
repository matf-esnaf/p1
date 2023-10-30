#include <stdio.h>

int main() {
    int a, b;
    printf("Unesite dva cela broja: ");
    scanf("%d %d", &a, &b);

    printf("a) Rezultat: %d\n", (a != b));
    printf("b) Rezultat: %d\n", (a % 2 == 0 && b % 2 == 0));
    printf("c) Rezultat: %d\n", ((a > 0 && a < 100) && (b > 0 && b < 100)));
}
