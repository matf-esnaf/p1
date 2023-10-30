#include <stdio.h>

int main() {
    int x, y;
    printf("Unesite dva cela broja: ");
    scanf("%d %d", &x, &y);

    printf("Minimum: %d\n", ((x < y) ? x : y));
}
