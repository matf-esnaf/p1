#include <stdio.h>

#define MAX 500

int main(){

	char n;

	int i=0;
	int niz[MAX];

    for (; i < MAX - 1; i++) {
        printf("Unesite karakter: ");
        scanf(" %c", &n);

        if (n == '*') {
            break;
        }

        niz[i] = n;
    }

    for (; i >= 0; i--) {
        printf("%c ", niz[i]);
    }

	return 0;
}
