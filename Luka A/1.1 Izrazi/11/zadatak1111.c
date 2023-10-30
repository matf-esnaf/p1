#include <stdio.h>
int main()
{

	int x, a, b, c, d, e, f, g, h, i, j;	

	printf("Unesite cenu proizvoda u dinarima:\n");
		scanf("%d", &x);

	a=x/5000;
	b=(x-a*5000)/2000;
	c=(x-a*5000-b*2000)/1000;
	d=(x-a*5000-b*2000-c*1000)/500;
	e=(x-a*5000-b*2000-c*1000-d*500)/200;
	f=(x-a*5000-b*2000-c*1000-d*500-e*200)/100;
	g=(x-a*5000-b*2000-c*1000-d*500-e*200-f*100)/50;
	h=(x-a*5000-b*2000-c*1000-d*500-e*200-f*100-g*50)/20;
	i=(x-a*5000-b*2000-c*1000-d*500-e*200-f*100-g*50-h*20)/10;
	j=(x-a*5000-b*2000-c*1000-d*500-e*200-f*100-g*50-h*20-i*10)/1;
	
	

	printf("Izos od %d mozete platit u novcanicama od:\n %d x 5000,\n %d x 2000,\n %d x 1000,\n %d x 500,\n %d x 200,\n %d x 100,\n %d x 50,\n %d x 20,\n %d x 10,\n %d x 1.\n", x, a, b, c, d, e, f, g, h, i, j);

return 0;
}
