#include <stdio.h>

int main() {
    int n;
    printf("Unesite pozitivan trocifreni broj: ");
    scanf("%d", &n);

    if(n < 100 || n >= 1000) {
        printf("Greska: niste uneli pozitivan trocifreni broj.\n");
        return 0;
    }

    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;

    int suma = a * a * a + b * b * b + c * c * c;
    if(suma == n) {
        printf("Broj je Armstrongov.\n");
    } else {
        printf("Broj nije Armstrongov.\n");
    }
}
