#include <stdio.h>

int main() {
    int a, b;
    char ope;
    printf("Unesite izraz: ");
    scanf("%d %c %d", &a, &ope, &b);

    switch(ope) {
        case '+':
            printf("Rezultat je %d\n", a + b);
            break;
        case '-':
            printf("Rezultat je %d\n", a - b);
            break;
        case '*':
            printf("Rezultat je %d\n", a * b);
            break;
        case '/':
            if(b == 0) {
                printf("Greska: deljenje nulom.\n");
                break;
            }
            printf("Rezultat je %d\n", a / b);
            break;
        case '%':
            if(b == 0) {
                printf("Greska: deljenje nulom.\n");
                break;
            }
            printf("Rezultat je %d\n", a % b);
            break;
        default:
            printf("Greska: nepoznat operator.\n");
            break;
    }
}
