#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Unesite duzinu stranice trougla: ");
    scanf("%f", &a);

    printf("Obim: %.2f\n", 3 * a);
    printf("Povrsina: %.2f\n", a * a * sqrt(3) / 4.00);
}
