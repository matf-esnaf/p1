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

    if((a <= b) && (b <= c) && (c <= d)) {
        printf("Cifre su uredjene neopadajuce.\n");
    } else if((a >= b) && (b >= c) && (c >= d)) {
        printf("Cifre su uredjene neopadajuce.\n");
    } else {
        printf("Cifre nisu uredjenje.\n");
    }
}
