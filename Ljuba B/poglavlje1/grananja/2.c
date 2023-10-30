#include <stdio.h>

int main() {
    float f;
    printf("Unesite jedan realan broj: ");
    scanf("%f", &f);

    if(f < 0.00) {
        f *= -1.00;
    }

    printf("Apsolutna vrednost: %.2f\n", f);
}
