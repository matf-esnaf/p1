#include <stdio.h>

int main() {
    int n;
    printf("Unesite pozitivan ceo broj: ");
    scanf("%d", &n);

    int m;
    printf("Unesite pozitivan dvocifreni broj: ");
    scanf("%d", &m);

    int rezultat = ((n / 1000) * 100 + m) * 1000 + (n % 1000);
    printf("Rezultat: %d\n", rezultat);
}
