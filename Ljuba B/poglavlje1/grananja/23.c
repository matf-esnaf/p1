#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Unesite jedan karakter: ");
    c = getchar();

    if(!isalpha(c)) {
        printf("Greska: uneti karakter nije slovo.\n");
        return 0;
    }

    c = tolower(c);

    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Uneti karakter je samoglasnik.\n");
            break;
        default:
            printf("Uneti karakter nije samoglasnik.\n");
            break;
    }
}
