#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("U pitanju je: ponedeljak\n");
            break;
        case 2:
            printf("U pitanju je: utorak\n");
            break;
        case 3:
            printf("U pitanju je: sreda\n");
            break;
        case 4:
            printf("U pitanju je: cetvrtak\n");
            break;
        case 5:
            printf("U pitanju je: petak\n");
            break;
        case 6:
            printf("U pitanju je: subota\n");
            break;
        case 7:
            printf("U pitanju je: nedelja\n");
            break;
        default:
            printf("Greska: neispravan unos dana.\n");
            break;
    }
}
