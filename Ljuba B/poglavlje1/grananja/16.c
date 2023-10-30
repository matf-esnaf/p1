#include <stdio.h>

int main() {
    float x1, y1;
    printf("Unesite koordinate tacke A: ");
    scanf("%f %f", &x1, &y1);

    float x2, y2;
    printf("Unesite koordinate tacke B: ");
    scanf("%f %f", &x2, &y2);

    if((x1 >= 0.00 && y1 >= 0.00) && (x2 >= 0.00 && y2 >= 0.00)) {
        printf("Tacke se nalaze u istom kvadrantu.\n");
    } else if((x1 >= 0.00 && y1 <= 0.00) && (x2 >= 0.00 && y2 <= 0.00)) {
        printf("Tacke se nalaze u istom kvadrantu.\n");
    } else if((x1 <= 0.00 && y1 <= 0.00) && (x2 <= 0.00 && y2 <= 0.00)) {
        printf("Tacke se nalaze u istom kvadrantu.\n");
    } else if((x1 <= 0.00 && y1 >= 0.00) && (x2 <= 0.00 && y2 >= 0.00)) {
        printf("Tacke se nalaze u istom kvadrantu.\n");
    } else {
        printf("Tacke se ne nalaze u istom kvadrantu.\n");
    }
}
