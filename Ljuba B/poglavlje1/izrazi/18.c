#include <stdio.h>

int main() {
    float broj;
    printf("Unesite broj funti: ");
    scanf("%f", &broj);

    printf("%.2f lb = %.2f km\n", broj, broj * 0.45359237);
}
