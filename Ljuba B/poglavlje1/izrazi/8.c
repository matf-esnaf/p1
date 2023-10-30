#include <stdio.h>

int main() {
    //https://betterexplained.com/articles/swap-two-variables-using-xor/
    //ovaj zadatak je moguce i uraditi sa pomocnom promenljivom

    int x, y;
    printf("Unesite vrednost x i y: ");
    scanf("%d %d", &x, &y);

    printf("Pre zamene: x = %d, y = %d\n", x, y);

    x ^= y;
    y ^= x;
    x ^= y;

    printf("Posle zamene: x = %d, y = %d\n", x, y);
}
