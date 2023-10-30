#include <stdio.h>

int main() {
    int dan, mesec, godina;
    printf("Unesite datum: ");
    scanf("%d.%d.%d.", &dan, &mesec, &godina);

    if(godina < 0 || dan <= 0 || mesec <= 0) {
        printf("Datum nije korektan.");
        return 0;
    }

    if(dan - 1 >= 1) {
        printf("Prethodni datum: %d.%d.%d.\n", dan - 1, mesec, godina);
        return 0;
    }

    //svaki datum je sada oblika 1.mesec.godina

    int brojDana = 30;
    switch(mesec) {
        case 1:
            if(godina == 0) {
                printf("Datum nije korektan.");
                break;
            }
            printf("Prethodni datum 31.12.%d.\n", godina - 1);
            break;
        case 2:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 3:
            int prestupna = 1;
            if(godina % 4 != 0) {
                prestupna = 0;
            }
            if(godina % 100 == 0 && godina % 400 != 0) {
                prestupna = 0;
            }
            brojDana = 28;
            if(prestupna) brojDana = 29;
            printf("Prethodni datum %d.%d.%d.\n", brojDana, mesec - 1, godina);
            break;
        case 4:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 5:
            printf("Prethodni datum 30.%d.%d.\n", mesec - 1, godina);
            break;
        case 6:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 7:
            printf("Prethodni datum 30.%d.%d.\n", mesec - 1, godina);
            break;
        case 8:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 9:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 10:
            printf("Prethodni datum 30.%d.%d.\n", mesec - 1, godina);
            break;
        case 11:
            printf("Prethodni datum 31.%d.%d.\n", mesec - 1, godina);
            break;
        case 12:
            printf("Prethodni datum 30.%d.%d.\n", mesec - 1, godina);
            break;
        default:
            printf("Datum nije korektan.\n");
            break;
    }
}
