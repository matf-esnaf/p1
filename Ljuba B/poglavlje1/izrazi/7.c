#include <stdio.h>

int main() {
    //Za vreme poletanja i sletanja racunamo u kom minutu u toku dana
    //su se desili, pa cemo duzinu leta pretvoriti u sate i minute

    int satPoletanja, minutPoletanja;
    printf("Unesite vreme poletanja: ");
    scanf("%d %d", &satPoletanja, &minutPoletanja);

    minutPoletanja += satPoletanja * 60;

    int satSletanja, minutSletanja;
    printf("Unesite vreme sletanja: ");
    scanf("%d %d", &satSletanja, &minutSletanja);

    minutSletanja += satSletanja * 60;

    int trajanjeLeta = minutSletanja - minutPoletanja;
    int sati = trajanjeLeta / 60, minuti = trajanjeLeta % 60;
    printf("Duzina trajanja leta: %d h i %d min\n", sati, minuti);
}
