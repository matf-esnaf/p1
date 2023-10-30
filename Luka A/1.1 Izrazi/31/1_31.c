#include <stdio.h>

int main()
{

	int x, y;

	printf("Unesite 2 cela broja x i y:");
		scanf("%d%d", &x, &y);

	if(x<y){
		printf("Minimum:%d.\n", x);
	}else{
		printf("Minimum:%d.\n", y);
	}

return 0;
}
