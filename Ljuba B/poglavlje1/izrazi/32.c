#include <stdio.h>

int main() {
    float x, y;
    printf("Unesite dva realna broja: ");
    scanf("%f %f", &x, &y);

    float mini = (x < y) ? x : y;
    float maksi = (x > y) ? x : y;

    float rez = (mini + 0.5) / (1 + maksi * maksi);
    printf("Rezultat: %.2f\n", rez);
}
