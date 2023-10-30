#include <stdio.h>

int main() {
    float broj;
    printf("Unesite broj milja: ");
    scanf("%f", &broj);

    printf("%.2f mi = %.2f km\n", broj, broj * 1.609344);
}
