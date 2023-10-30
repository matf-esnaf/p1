#include <stdio.h>

int main() {
    //za ovaj zadatak cu koristiti nizove i petlje
    int n;
    printf("Unesite cetvorocifreni broj: ");
    scanf("%d", &n);

    int negativan = 0;
    if(n < 0) {
        negativan = 1;
        n *= -1;
    }

    if(n < 1000 || n >= 10000) {
        printf("Greska: niste uneli cetvorocifreni broj.\n");
        return 0;
    }

    int a[4] = {n / 1000, n / 100 % 10, n / 10 % 10, n % 10};

    int najveci = -1, lokaNajveci = 5;
    int najmanji = 10, lokaNajmanji = 5;

    for(int i = 3; i >= 0; --i) {
        if(a[i] > najveci) {
            najveci = a[i];
            lokaNajveci = i;
        }
        if(a[i] < najmanji) {
            najmanji = a[i];
            lokaNajmanji = i;
        }
    }

    //vrsimo zamenu brojeva na mestima lokaNajveci i lokaNajmanji
    //moguce je uraditi i na mestu ovu zamenu: https://betterexplained.com/articles/swap-two-variables-using-xor/
    {
        int tmp = a[lokaNajveci];
        a[lokaNajveci] = a[lokaNajmanji];
        a[lokaNajmanji] = tmp;
    }

    int rezultat = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    if(negativan) rezultat *= -1;

    printf("Rezultat: %d\n", rezultat);
}
