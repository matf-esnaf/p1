#include <stdio.h>

int main() {
    //pohlepno uzimamo od najvece novcanice ka najmanjoj
    //ovaj zadatak je mnogo lakse uraditi sa nizovima :/

    int proizvod;
    printf("Unesite cenu proizvoda: ");
    scanf("%d", &proizvod);

    int pocetniProizvod = proizvod;

    int nov5000 = proizvod / 5000;
    proizvod %= 5000;

    int nov2000 = proizvod / 2000;
    proizvod %= 2000;

    int nov1000 = proizvod / 1000;
    proizvod %= 1000;

    int nov500 = proizvod / 500;
    proizvod %= 500;

    int nov200 = proizvod / 200;
    proizvod %= 200;

    int nov100 = proizvod / 100;
    proizvod %= 100;

    int nov50 = proizvod / 50;
    proizvod %= 50;

    int nov20 = proizvod / 20;
    proizvod %= 20;

    int nov10 = proizvod / 10;
    proizvod %= 10;

    int nov1 = proizvod / 1;
    proizvod %= 1;

    printf("%d = %d*5000 + %d*2000 + %d*1000 "
            "+ %d*500 + %d*200 + %d*100 "
            "+ %d*50 + %d*20 + %d*10 + %d*1\n",
            pocetniProizvod, nov5000, nov2000, nov1000, 
            nov500, nov200, nov100, 
            nov50, nov20, nov10, nov1);
}
