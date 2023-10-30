#include <stdio.h>

int main() {
    float farenhajt;
    printf("Unesite temperaturu u F: ");
    scanf("%f", &farenhajt);

    printf("%.2f F = %.2f C\n", farenhajt, (farenhajt - 32) * 5.00 / 9.00);
}
