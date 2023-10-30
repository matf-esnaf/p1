#include <stdio.h>

int main() {
    int n;
    printf("Unesite cetvorocifreni broj: ");
    scanf("%d", &n);

    int hiljade = n / 1000;
    int stotine = n / 100 % 10;
    int desetice = n / 10 % 10;
    int jedinice = n % 10;

    int proizvod = hiljade * stotine * desetice * jedinice;
    int razlike = (hiljade + jedinice) - (stotine + desetice);
    int sumeKvadrata = hiljade * hiljade + stotine * stotine 
        + desetice * desetice + jedinice * jedinice;
    int obrnut = 1000 * jedinice + 100 * desetice + 10 * stotine + hiljade;
    int zamena = 1000 * hiljade + 100 * jedinice + 10 * desetice + stotine;

    printf("Proizvod cifara: %d\n", proizvod);
    printf("Razlika sume krajnjih i srednjih: %d\n", razlike);
    printf("Sume kvadrata cifara: %d\n", sumeKvadrata);
    printf("Broj u obrnutom poretku: %d\n", obrnut);
    printf("Broj sa zamenjenom cifrom jedinica i stotina: %d\n", zamena);
}
