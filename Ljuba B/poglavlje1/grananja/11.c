#include <stdio.h>

int main() {
    int n;
    printf("Unesite cetvorocifreni broj: ");
    scanf("%d", &n);

    if(n < 0) n *= -1;
    if(n < 1000 || n >= 10000) {
        printf("Greska: niste uneli cetvorocifreni broj.\n");
        return 0;
    }

    int a = n / 1000;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;

    int najveca = a;
    if(b > najveca) najveca = b;
    if(c > najveca) najveca = c;
    if(d > najveca) najveca = d;

    printf("Najveca cifra je: %d\n", najveca);
}
