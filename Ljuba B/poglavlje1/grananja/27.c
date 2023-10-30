#include <stdio.h>

int main() {
    int dan, mesec, godina;
    printf("Unesite datum: ");
    scanf("%d.%d.%d.", &dan, &mesec, &godina);

    if(godina < 0 || dan <= 0 || mesec <= 0) {
        printf("Datum nije korektan.");
        return 0;
    }

    int brojDana = 30;
    switch(mesec) {
        case 1:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 2:
            int prestupna = 1;
            if(godina % 4 != 0) {
                prestupna = 0;
            }
            if(godina % 100 == 0 && godina % 400 != 0) {
                prestupna = 0;
            }
            brojDana = 28;
            if(prestupna) brojDana = 29;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 3:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 4:
            brojDana = 30;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 5:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 6:
            brojDana = 30;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 7:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 8:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 9:
            brojDana = 30;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 10:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 11:
            brojDana = 30;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        case 12:
            brojDana = 31;
            (dan <= brojDana) ? printf("Datum je korektan.\n") : printf("Datum nije korektan.\n");
            break;
        default:
            printf("Datum nije korektan.\n");
            break;
    }
}
