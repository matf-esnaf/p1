#include <stdio.h>

int min(int x, int y, int z);

int main() {
    int num1, num2, num3;

    printf("Unesite tri broja: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int rezultat = min(num1, num2, num3);

    printf("Minimum iznosi %d.\n", rezultat);

    return 0;
}

int min(int x, int y, int z) {
    if (x < y && x < z) {
        return x;
    } else if (y < x && y < z) {
        return y;
    } else {
        return z;
    }
}

