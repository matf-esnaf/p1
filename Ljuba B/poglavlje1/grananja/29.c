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
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : brojDana + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
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
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 3:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 4:
            brojDana = 30;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 5:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 6:
            brojDana = 30;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 7:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 8:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 9:
            brojDana = 30;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 10:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 11:
            brojDana = 30;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? mesec + 1 : mesec), godina);
            break;
        case 12:
            brojDana = 31;
            printf("Naredni datum: %d.%d.%d.\n", ((dan == brojDana) ? 1 : dan + 1), ((dan == brojDana) ? 1 : mesec), ((dan == brojDana) ? godina + 1 : godina));
            break;
        default:
            printf("Datum nije korektan.\n");
            break;
    }
}
