#include <stdio.h>

int main() {
    int a, b, c;
    printf("Unesite tri cene: ");
    scanf("%d %d %d", &a, &b, &c);

    int minimalni = a;
    if(b < minimalni) minimalni = b;
    if(c < minimalni) minimalni = c;

    if(minimalni <= 0) {
        printf("Greska: neispravan unos cene.\n");
        return 0;
    }

    int racun = a + b + c - minimalni + 1;
    printf("Cena sa popustom: %d din\n", racun);
    printf("Usteda: %d din\n", minimalni - 1);
}
