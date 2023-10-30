#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int k;
    printf("Unesite redom x i k: ");
    scanf("%f %d", &x, &k);

    if(k < 1 || k > 3) {
        printf("Greska: nedozvoljena vrednost za k.\n");
        return 0;
    }

    float vrednost = 2 * cos(x) - x * x * x;
    if(k == 1) {
        printf("F(%.2f, %d) = %.2f\n", x, k, vrednost);
        return 0;
    }

    vrednost = 2 * cos(vrednost) - vrednost * vrednost * vrednost;
    if(k == 2) {
        printf("F(%.2f, %d) = %.2f\n", x, k, vrednost);
        return 0;
    }

    vrednost = 2 * cos(vrednost) - vrednost * vrednost * vrednost;
    if(k == 3) {
        printf("F(%.2f, %d) = %.2f\n", x, k, vrednost);
        return 0;
    }
}
