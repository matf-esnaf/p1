#include <stdio.h>

int main() {
    int godina;
    printf("Unesite godinu: ");
    scanf("%d", &godina);

    int mesec;
    printf("Unesite mesec: ");
    scanf("%d", &mesec);

    if(godina < 0) {
        printf("Greska: neispravan unos godine.\n");
        return 0;
    }

    switch(mesec) {
        case 1:
            printf("Januar, 31 dan\n");
            break;
        case 2:
            int prestupna = 1;
            if(godina % 4 != 0) {
                prestupna = 0;
            }
            if(godina % 100 == 0 && godina % 400 != 0) {
                prestupna = 0;
            }
            if(!prestupna) {
                printf("Februar, 28 dana\n");
            } else {
                printf("Februar, 29 dana\n");
            }
            break;
        case 3:
            printf("Mart, 31 dan\n");
            break;
        case 4:
            printf("April, 30 dana\n");
            break;
        case 5:
            printf("Maj, 31 dan\n");
            break;
        case 6:
            printf("Jun, 30 dana\n");
            break;
        case 7:
            printf("Jul, 31 dan\n");
            break;
        case 8:
            printf("Avgust, 31 dan\n");
            break;
        case 9:
            printf("Septembar, 30 dana\n");
            break;
        case 10:
            printf("Oktobar, 31 dan\n");
            break;
        case 11:
            printf("Novembar, 30 dana\n");
            break;
        case 12:
            printf("Decembar, 31 dan\n");
            break;
        default:
            printf("Greska: neispravan unos meseca.\n");
            break;
    }
}
