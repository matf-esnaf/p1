#include <stdio.h>
int main()
{

	float x, x_abs;

	printf("Uneti ceo broj x:");
		scanf("%f", &x);

	if (x<0){
		x_abs=-x;
	printf("Aposlutno x zaokruzeno iznosi %.2f.", x_abs);
	
	}else{
		x_abs=x;
	printf("Apsolutno x zaokruzeno iznosi %.2f.", x_abs);
	}	

return 0;
}
