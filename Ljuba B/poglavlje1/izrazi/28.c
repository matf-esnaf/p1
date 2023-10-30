#include <stdio.h>
#include <math.h>

int main() {
    int x, p, c;
    printf("Unesite redom x, p i c: ");
    scanf("%d %d %d", &x, &p, &c);

    int stepen = pow(10, p);
    int preP = x / stepen;
    int posleP = x % stepen;

    int rezultat = (preP * 10 + c) * stepen + posleP;
    printf("Rezultat: %d\n", rezultat);
}
