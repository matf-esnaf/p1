#include <stdio.h>

int main() {
    int cena, kolicina, iznos;
    printf("Unesite cenu, kolicinu i iznos: ");
    scanf("%d %d %d", &cena, &kolicina, &iznos);

    int kusur = iznos - cena * kolicina;
    printf("Kusur: %d dinara\n", kusur);
}
