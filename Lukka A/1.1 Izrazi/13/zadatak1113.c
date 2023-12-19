#include <stdio.h>
int main()
{

	//x oznacava jedan ceo cetvorocifreni broj koji moze biti pozitivan ili negativan
	//a ,b, c, d oznacavaju cifre u cetvorocifrenom broju x
	//pc, raz, skc, obr, zam oznacava operacije koje zadatak zahteva da odradimo

	int x, a, b, c, d, pc, raz, skc, obr, zam;

	printf("Unesite jedan cetvorocifreni broj x:");
		scanf("%d", &x);

	a=x/1000;
	d=x%10;
	c=(x%100-d*1)/10;
	b=(x%1000-c*10-d*1)/100;

	pc=a*b*c*d;
	raz=(a+d)-(b+c);
	skc=a*a+b*b+c*c+d*d;
	obr=d*1000+c*100+b*10+a*1;
	zam=a*1000+d*100+c*10+b*1;

	printf("Proizvod cifara:%d\n", pc);
	printf("Razlika sume krajnjih i srednih cifara:%d\n", raz);
	printf("Suma kvadrata cifara:%d\n", skc);
	printf("Broj u obrnutom poretku:%d\n", obr);
	printf("Zamena cifre jedinica i stotina:%d\n", zam);

return 0;
}
