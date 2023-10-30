#include <stdio.h>

int main() {
    int sati, minuti;
    printf("Unesite vreme: ");
    scanf("%d:%d", &sati, &minuti);

    if ((sati < 0 || sati >= 24) || (minuti < 0 || minuti >= 60)) {
        printf("Greska: neispravan unos vremena.\n");
        return 0;
    }

    printf("Do ponoci: %d sati i %d minuta\n", (23 - sati) + (minuti == 0), (60 - minuti) % 60);
}
