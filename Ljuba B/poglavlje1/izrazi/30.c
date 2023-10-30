#include <stdio.h>

int main() {
    int x, y;
    printf("Unesite dva cela broja: ");
    scanf("%d %d", &x, &y);

    printf("Maksimum: %d\n", ((x > y) ? x : y));
}
