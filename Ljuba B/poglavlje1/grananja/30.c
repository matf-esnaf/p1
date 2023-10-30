#include <stdio.h>
#include <stdlib.h>

int main() {
    //Polja su iste boje, akko (-1)^(k + l) = (-1)^(m + n)
    //najtezi korak pri napadanju kraljice na polje je odrediti da li su dva polja na istim dijagonalama
    //Za dva polja koja su na istoj glavnoj dijagonali, vazi x1 - y1 = x2 - y2 ((x, y) (x + d, y + d)) <- posmatrati razlike ova dva polja
    //Za dva polja koja su na istoj sporednoj dijagonali, vazi x1 + y1 = x2 + y2 ((x, y) (x + d, y - d)) <- posmatrati zbir ova dva polja
    int k, l;
    printf("Unesite (k, l): ");
    scanf("%d %d", &k, &l);

    int m, n;
    printf("Unesite (m, n): ");
    scanf("%d %d", &m, &n);

    if((k < 1 || k > 8) || (l < 1 || l > 8)) {
        printf("Greska: neispravna pozicija.\n");
        return 0;
    }
    if((m < 1 || m > 8) || (n < 1 || n > 8)) {
        printf("Greska: neispravna pozicija.\n");
        return 0;
    }

    if((k + l) % 2 == (m + n) % 2) {
        printf("Polja su iste boje.\n");
    } else {
        printf("Polja su razlicite boje.\n");
    }

    if((k - l) == (m - n) || (k + l) == (m + n) || k == m || l == n) {
        printf("Kraljica sa (%d, %d) ugrozava (%d, %d).\n", k, l, m, n);
    } else {
        printf("Kraljica sa (%d, %d) ne ugrozava (%d, %d).\n", k, l, m, n);
    }

    int distX = abs(k - m);
    int distY = abs(l - n);

    int cnt1 = (distX == 1) + (distY == 1);
    int cnt2 = (distX == 2) + (distY == 2);

    if(cnt1 == 1 && cnt2 == 1) {
        printf("Konj sa (%d, %d) ugrozava (%d, %d).\n", k, l, m, n);
    } else {
        printf("Konj sa (%d, %d) ne ugrozava (%d, %d).\n", k, l, m, n);
    }
}
