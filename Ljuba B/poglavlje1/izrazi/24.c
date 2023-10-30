#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Unesite duzine stranica trougla: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Obim: %.2f\n", a + b + c);

    float s = (a + b + c) / 2.00;
    float povrsina = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Povrsina: %.2f\n", povrsina);
}
