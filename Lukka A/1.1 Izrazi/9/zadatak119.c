#include <stdio.h>
int main()
{

	int x, y;
	printf("Unesite vrednost za x i vrednost za y:\n");
		printf("x:");
		scanf("%d", &x);
		printf("y:");
		scanf("%d", &y);

	int temp=x+y;
	y=x-y;
	x=temp;


	printf("Nove vrednost broja x i broja y su %d i %d.\n",x, y);

return 0;
}
