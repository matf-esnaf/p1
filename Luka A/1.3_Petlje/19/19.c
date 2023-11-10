#include <stdio.h>

int main() {
    float n, n1 = 0, x, x1;

    printf("Unesite broj artikala: ");
    scanf("%f", &n);

    if (n <= 0) {
        printf("Nekorektan unos broja artikala.\n");
        return 1;
    }

    printf("Unesite cene artikala: ");

    while (n1 < n) {
        scanf("%f", &x);

        if (x <= 0) {
            printf("Nekorektan unos cene.\n");
            return 1;
        }

        if (n1 == 0 || x < x1) {
            x1 = x;
        }

        n1++;
    }

    printf("Najmanja vrednost iznosi %f.\n", x1);

    return 0;
}

