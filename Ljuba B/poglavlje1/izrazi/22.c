#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Unesite poluprecnik: ");
    scanf("%f", &r);

    printf("Obim: %.2f\n", 2 * r * M_PI);
    printf("Povrsina: %.2f\n", r * r * M_PI);
}
