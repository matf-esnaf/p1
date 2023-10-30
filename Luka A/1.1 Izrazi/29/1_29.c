#include <stdio.h>

int main()
{

        int a, b;

        printf("Uneti 2 cela broja a i b:");
                scanf("%d%d", &a, &b);

        if (a==b){
                printf("a) Rezultat iznosi: 0.\n");
        }else{
                printf("a) Rezultat iznosi: 1.\n");
        }

        if (a%2==0 && b%2==0){
                printf("b) Rezultat iznosi: 1.\n");
        }else{
                printf("b) Rezultat iznosi: 0.\n");
        }

        if (a > 0 && b > 0 && a < 100 && b < 100){
                printf("c) Rezultat iznosi: 1.\n");
        }else{
                printf("c) Rezultat iznosi: 0.\n");
        }

return 0;
}
