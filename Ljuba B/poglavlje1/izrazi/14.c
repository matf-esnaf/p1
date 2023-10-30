#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    int rezultat = (n / 100) * 10 + (n % 10);
    printf("Rezultat: %d\n", rezultat);
}
