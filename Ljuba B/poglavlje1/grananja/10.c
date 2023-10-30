#include <stdio.h>
#include <ctype.h>

int main() {
    char a, b, c;
    printf("Unesite sifru: ");
    a = getchar(), b = getchar(), c = getchar();

    if(!isalnum(a)) {
        printf("Greska: %c je neispravan karakter.\n", a);
        return 0;
    } else if(!isalnum(b)) {
        printf("Greska: %c je neispravan karakter.\n", b);
        return 0;
    } else if(!isalnum(c)) {
        printf("Greska: %c je neispravan karakter.\n", c);
        return 0;
    }

    if(isalpha(a)) a = tolower(a);
    if(isalpha(b)) b = tolower(b);
    if(isalpha(c)) c = tolower(c);

    printf("Rezultat: %c%c%c\n", a, b, c);
}
