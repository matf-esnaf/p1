#include <stdio.h>

void vreme (int a, int *ph, int *pm, int *ps);

int main(){

	int a, h, m, s;

	printf("Unesite vreme filma u sekundama: ");
	scanf("%d", &a);

	if(a<0){
		printf("\n-1");
		return -1;
	}

	vreme (a, &h, &m, &s);

	printf("%dh:%dm:%ds", h, m, s);

	return 0;
}

void vreme (int a, int *ph, int *pm, int *ps){
	
	*ph=a/3600;
	a%=3600;
	*pm=a/60;
	*ps=a%60;

}
