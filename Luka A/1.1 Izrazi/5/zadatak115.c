#include <stdio.h>
int main()
{

	int x, y, z;
	
	printf("Uneti zeljenu kolicinu jabuka u kilogramima:\n");
		scanf("%d", &x);
	printf("Uneti cenu jabuka po kilogramu:\n");
		scanf("%d", &y);

	z=x*y;

	printf("Cena vasih jabuka iznosi:%d dinara\n", z);

return 0;
}
