#include <stdio.h>
int main()
{

	int x, a, b, c, d;
	
	printf("Uneti proizvoljan trocifren prirodan broj x:\n");
		scanf("%d", &x);
	
	a=x/100;
	b=(x-a*100)/10;
	c=x-a*100-b*10;

	printf("Cifra stotina je %d.\n", a);
	printf("Cifra destica je %d.\n", b);
	printf("Cifra jedinica je %d.\n", c);

return 0;
}
