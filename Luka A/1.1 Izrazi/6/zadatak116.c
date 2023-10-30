#include <stdio.h>
int main(){

	int x, y, z, rezultat;

	printf("Unesite cenu, kolicinu i iznos\n");
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &z);

	rezultat=z-x*y;

	printf("Kusur iznosi %d\n", rezultat);	

return 0;
}
