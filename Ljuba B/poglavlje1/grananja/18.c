#include <stdio.h>

int main() {
    int a1, b1, a2, b2;
    printf("Unesite a1, b1, a2 i b2: ");
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    //ako postoji presek intervala [a1, b1] i [a2, b2], on ce biti [max(a1, a2), min(b1, b2)]
    int presekLevo = (a1 > a2) ? a1 : a2;
    int presekDesno = (b1 < b2) ? b1 : b2;

    int povrsinaPreseka = 0;

    if(presekLevo <= presekDesno) {
        povrsinaPreseka = presekDesno - presekLevo;
    }

    printf("Duzina preseka: %d\n", povrsinaPreseka);
    
    if(povrsinaPreseka) {
        printf("Presecni interval: [%d, %d]\n", presekLevo, presekDesno);
    } else {
        printf("Presecni interval: prazan\n");
    }

    int duzina = (b1 - a1) + (b2 - a2) - povrsinaPreseka;
    printf("Duzina koju pokrivaju: %d\n", duzina);

    int mini = (a1 < a2) ? a1 : a2;
    int maksi = (b1 > b2) ? b1 : b2;
    printf("Najmanji interval: [%d, %d]\n", mini, maksi);
}
