#include <stdio.h>

int main() {
    int k;
    printf("Unesite k: ");
    scanf("%d", &k);

    if(k > 189) {
        printf("Greska: neispravan unos pozicije.\n");
        return 0;
    }

    if(k < 10) {
        printf("Na %d-toj poziciji je broj %d.\n", k, k);
        return 0;
    }

    int koji = 10 + ((k - 10) / 2);

    if((k - 10) % 2 == 0) {
        printf("Na %d-toj poziciji je broj %d.\n", k, koji / 10);
    } else {
        printf("Na %d-toj poziciji je broj %d.\n", k, koji % 10);
    }
}
