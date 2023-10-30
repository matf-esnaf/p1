#include <stdio.h>

int main() {
    int n;
    printf("Unesite trocifreni broj: ");
    scanf("%d", &n);

    int obrnut = 100 * (n % 10) + 10 * ((n / 10) % 10) + (n / 100);
    printf("Obrnuto: %d\n", obrnut);
}
