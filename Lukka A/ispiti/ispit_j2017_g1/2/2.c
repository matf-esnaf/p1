#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funkcija koja proverava da li se reč može sastaviti od karaktera reči "programiranje"
int mozeSeSastaviti(char *rec) {
    char trazenaRec[] = "programiranje";
    int duzinaTrazeneReci = strlen(trazenaRec);
    int karakteri[26] = {0}; // Inicijalizujemo niz za brojanje karaktera

    // Brojimo karaktere u trazenoj reci
    for (int i = 0; i < duzinaTrazeneReci; i++) {
        karakteri[tolower(trazenaRec[i]) - 'a']++;
    }

    // Proveravamo da li se reč može sastaviti od karaktera trazene reci
    for (int i = 0; i < strlen(rec); i++) {
        char c = tolower(rec[i]);
        if (isalpha(c)) {
            if (karakteri[c - 'a'] == 0) {
                return 0; // Karakter nije prisutan u trazenoj reci
            } else {
                karakteri[c - 'a']--;
            }
        }
    }

    return 1; // Reč se može sastaviti
}

int main() {
    char rec[21]; // Maksimalna dužina reči je 20 karaktera + null terminator

    printf("Unesite reci (EOF za kraj unosa):\n");

    while (scanf("%20s", rec) != EOF) {
        if (mozeSeSastaviti(rec)) {
            printf("%s\n", rec);
        }
    }

    return 0;
}

