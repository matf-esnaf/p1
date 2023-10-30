#include <stdio.h>

int main() {
    int kolicina, cena;
    printf("Unesite kolicinu jabuka (u kg): ");
    scanf("%d", &kolicina);
    printf("Unesite cenu (u dinarima): ");
    scanf("%d", &cena);

    printf("Molimo platite %d dinara.\n", kolicina * cena);
}
