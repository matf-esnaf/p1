#include <stdio.h>
int main()
{

	int x, y, z, w;
	printf("Unesite proizvoljan pozitivan broj x:\n");
		scanf("%d", &x);

	y=x/100;
	z=x%10;
	w=(x%100)-z;
	x=z*100+w+y;

	printf("Vas broj nakon obrtanja cifara iznosi %d\n", x);

return 0;
}
