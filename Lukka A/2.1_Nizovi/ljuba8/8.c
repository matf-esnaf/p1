#include <stdio.h>
#include <ctype.h>

#define ALFABET 26

int velika[ALFABET], mala[ALFABET];

int main() {
    for(int i = 0; i < ALFABET; ++i) velika[i] = mala[i] = 0;
    char c;
    while((c = getchar()) != EOF) {
        if(isupper(c)) {
            velika[c-'A']++;
        } else if(islower(c)) {
            mala[c-'a']++;
        }
    }

    for(int i = 0; i < ALFABET; ++i) {
        if(mala[i] > 0) {
            printf("Slovo %c se pojavljuje %d puta.\n", i + 'a', mala[i]);
        }
    }

    for(int i = 0; i < ALFABET; ++i) {
        if(velika[i] > 0) {
            printf("Slovo %c se pojavljuje %d puta.\n", i + 'A', velika[i]);
        }
    }
}
