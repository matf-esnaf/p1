#include <stdio.h>

int main()
{
	int a1, b1, a2, b2;
	int min_a, max_a, min_b, max_b;

	printf("Uneti prvi interval [a1,b1]: ");
		scanf("%d %d", &a1, &b1);
	printf("Uneti drugi interval [a2,b2]: ");
		scanf("%d %d", &a2, &b1);

	if(a1<a2){
		min_a=a1;
		max_a=a2;
	}else{
		min_a=a2;
		max_a=a1;

	}if(b1<b2){
		min_b=b1;
		max_b=b2;
	}else{
		min_b=b2;
		max_b=b1;
	}
	

	

	

return 0;
}
