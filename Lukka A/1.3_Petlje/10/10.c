#include <stdio.h>
int main()
{

	int x, x1;

	printf("Uneti ceo proizvoljan broj: ");
		scanf("%d", &x);

	if(x>0){
		x=x;
	}else{
		x=-x;
	}

	while(x%10!=0){
		x1=x%10;
	printf("%d", x1);
		x=x/10;
	}

	if(x==0)


return 0;
}
