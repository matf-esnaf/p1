#include <stdio.h>
#include <ctype.h>

int main() {
    char a, b, c;
    printf("Unesite karaktere: ");
    scanf("%c %c %c", &a, &b, &c);

    if((!isdigit(a) && !isdigit(b)) && !isdigit(c)) {
        printf("Medju unetim karakterima nema cifara.\n");
        return 0;
    }

    int proizvod = 1;
    if(isdigit(a)) proizvod *= (a - '0');
    if(isdigit(b)) proizvod *= (b - '0');
    if(isdigit(c)) proizvod *= (c - '0');

    printf("Proizvod cifara: %d\n", proizvod);
}
