#include <stdio.h>

int main() {
    int prviArtikal, drugiArtikal;
    printf("Unesite cenu prvog artikla: ");
    scanf("%d", &prviArtikal);
    printf("Unesite cenu drugog artikla: ");
    scanf("%d", &drugiArtikal);

    printf("Ukupna cena: %d\n", prviArtikal + drugiArtikal);
}
