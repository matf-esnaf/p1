#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x, c1, c2, c3, c4;

	printf("Uneti jedan cetvorocifreni broj: ");
		scanf("%d", &x);

	if(x/1000 >- 10 && x/1000 < 10 && x/1000 != 0){

		c1=abs(x/1000);
		c4=abs(x%10);
		c3=abs(((x%100)-c4)/10);
		c2=abs(((x%1000)-c4-c3*10)/100);

	if(c1>c2 && c1>c3 && c1>c4){
		printf("Najveca cifra je %d.\n", c1);
	}if(c2>c1 && c2>c3 && c2>c4){
		printf("Najveca cifra je %d.\n", c2);
	}if(c3>c1 && c3>c2 && c3>c4){
		printf("Najveca cifra je %d.\n", c3);
	}if(c4>c1 && c4>c2 && c4>c3){
		printf("Najveca cifra je %d.\n", c4);
	}
	
	}else{
		printf("Uneti broj nije cetvorocifren.\n");
	}

return 0;
}
