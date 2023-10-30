#include <stdio.h>

int main() {
    int n;
    printf("Unesite trocifreni broj: ");
    scanf("%d", &n);

    printf("Cifra jedinica: %d\n", n % 10);
    printf("Cifra desetica: %d\n", (n / 10) % 10);
    printf("Cifra stotina: %d\n", n / 100);
}
