#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Unesite koeficijente A, B i C: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0) {
        printf("Data jednacina nije kvadratna.\n");
        return 0;
    }

    int D = b * b - 4 * a * c;
    if(D < 0) {
        printf("Jednacina nema resenja.\n");
    } else if(D == 0) {
        float resenje = -b / (2.00 * a);
        printf("Jednacina ima jedno realno resenje: %.2f\n", resenje);
    } else if(D > 0) {
        float resenje1 = (-b + sqrt(D)) / (2.00 * a);
        float resenje2 = (-b - sqrt(D)) / (2.00 * a);
        printf("Jednacina ima dva razlicita realna resenja: %.2f %.2f\n", resenje1, resenje2);
    }
}
