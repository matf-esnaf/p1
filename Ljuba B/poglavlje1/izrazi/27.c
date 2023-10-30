#include <stdio.h>

int main() {
    float duzina, sirina, visina;
    printf("Unesite dimenzije sobe: ");
    scanf("%f %f %f", &duzina, &sirina, &visina);

    float cenaPoMetruKvadratnom;
    printf("Unesite cenu po m2: ");
    scanf("%f", &cenaPoMetruKvadratnom);

    float povrsina = ((sirina * duzina) + 2 * visina * (sirina + duzina)) * 0.8;
    float cena = povrsina * cenaPoMetruKvadratnom;

    printf("Moler treba da okreci %.2f m2\n", povrsina);
    printf("Cena krecenja: %.2f\n", cena);
}
