#include <stdio.h>

int main() {
    int n;
    printf("Unesite pozitivan trocifreni broj: ");
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

    int proizvod = 1;

    if(a % 2 == 0) proizvod *= a;
    if(b % 2 == 0) proizvod *= b;
    if(c % 2 == 0) proizvod *= c;
    if(d % 2 == 0) proizvod *= d;

    //proizvod ce biti paran akko je jedna od cifara parna
    if(proizvod == 1) {
        printf("Nema parnih cifara.\n");
        return 0;
    }

    printf("Proizvod parnih cifara: %d\n", proizvod);
}
