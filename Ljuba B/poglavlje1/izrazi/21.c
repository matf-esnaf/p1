#include <stdio.h>

int main() {
    float a, b;
    printf("Unesite duzine stranica: ");
    scanf("%f %f", &a, &b);

    printf("Obim: %.2f\n", 2 * (a + b));
    printf("Povrsina: %.2f\n", a * b);
}
