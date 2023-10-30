#include <stdio.h>

int main() {
    int godina;
    printf("Unesite godinu: ");
    scanf("%d", &godina);

    if(godina % 4 != 0) {
        printf("Godina nije prestupna.\n");
        return 0;
    }
    //godina % 4 == 0
    if(godina % 100 == 0 && godina % 400 != 0) {
        printf("Godina nije prestupna.\n");
        return 0;
    }
    printf("Godina je prestupna.\n");
}
