#include <stdio.h>

int main() {
    float broj;
    printf("Unesite broj inca: ");
    scanf("%f", &broj);

    printf("%.2f in = %.2f cm\n", broj, broj * 2.54);
}
