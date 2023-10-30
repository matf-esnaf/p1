#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Unesite brojeve: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    double det = a * d - b * c;
    printf("Determinanta: %.4f\n", det);
}
