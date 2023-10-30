#include <stdio.h>

int main() {
    float f;
    printf("Unesite jedan ceo broj: ");
    scanf("%f", &f);

    if(f == 0.00) {
        printf("Greska: nedozvoljeno je deljenje nulom.\n");
        return 0;
    }

    printf("Reciprocna vrednost: %.4f\n", (1.00 / f));
}
