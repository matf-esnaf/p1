#include <stdio.h>

int main() {
    int x, y;
    printf("Unesite vrednost broja x: ");
    scanf("%d", &x);
    printf("Unesite vrednost broja y: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
}
