#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Unesite karakter: ");
    c = getchar();

    printf("Uneti karakter: %c\n", c);
    printf("ASCII kod: %d\n", c);

    if(islower(c)) {
        printf("Odgovarajuce veliko slovo: %c\n", toupper(c));
        printf("ASCII kod: %d\n", toupper(c));
    } else if(isupper(c)) {
        printf("Odgovarajuce malo slovo: %c\n", tolower(c));
        printf("ASCII kod: %d\n", tolower(c));
    }
}
