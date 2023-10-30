#include <stdio.h>

int main() {
    int dan, mesec;
    printf("Unesite dan i mesec: ");
    scanf("%d.%d.", &dan, &mesec);

    switch(mesec) {
        case 4:
        case 5:
            printf("prolece\n");
            break;
        case 7:
        case 8:
            printf("leto\n");
            break;
        case 10:
        case 11:
            printf("jesen\n");
            break;
        case 1:
        case 2:
            printf("zima\n");
            break;
        case 3:
            if(dan >= 20) {
                printf("prolece\n");
                break;
            }
            printf("zima\n");
            break;
        case 6:
            if(dan >= 21) {
                printf("leto\n");
                break;
            }
            printf("prolece\n");
            break;
        case 9:
            if(dan >= 23) {
                printf("jesen\n");
                break;
            }
            printf("leto\n");
            break;
        case 12:
            if(dan >= 21) {
                printf("zima\n");
                break;
            }
            printf("jesen\n");
            break;
        default:
            printf("Greska!\n");
            break;
    }
}
