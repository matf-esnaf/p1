#include <stdio.h>

int main() {
    float x1, y1;
    printf("Unesite koordinate gornjeg levog temena: ");
    scanf("%f %f", &x1, &y1);

    float x2, y2;
    printf("Unesite koordinate donjeg desnog temena: ");
    scanf("%f %f", &x2, &y2);

    float visina = x2 - x1, sirina = y1 - y2;
    printf("Obim: %.2f\n", 2 * (visina + sirina));
    printf("Povrsina: %.2f\n", visina * sirina);
}
