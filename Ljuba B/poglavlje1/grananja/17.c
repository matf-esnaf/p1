#include <stdio.h>
#include <math.h>

const double eps = 0.00001;

int main() {
    //posmatrajmo tacke A, B, C kao vektore
    //ove tacke se nalaze na istoj pravi, ako je vektorski proizvod
    //(B-A) i (C - B) jednak nuli
    //https://algorithmtutor.com/Computational-Geometry/Determining-if-two-consecutive-segments-turn-left-or-right/
    
    float x1, y1;
    printf("Unesite koordinate tacke A: ");
    scanf("%f %f", &x1, &y1);
    float x2, y2;
    printf("Unesite koordinate tacke B: ");
    scanf("%f %f", &x2, &y2);
    float x3, y3;
    printf("Unesite koordinate tacke C: ");
    scanf("%f %f", &x3, &y3);

    float vx1 = x2 - x1, vy1 = y2 - y1;
    float vx2 = x3 - x2, vy2 = y3 - y2;

    float proizvod = (vx1 * vy2) - (vx2 * vy1);

    //provera dva float broja je jako neprecizno
    //potrebno je proveriti da li je njihova razlika manja od nekog jako malog broja
    if(fabs(proizvod) < eps) {
        printf("Tacke se nalaze na istoj pravoj.\n");
    } else {
        printf("Tacke se ne nalaze na istoj pravoj.\n");
    }
}
