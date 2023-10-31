#include <stdio.h>

int main()
{

	int x, x1, x2;
	int  c1, c2, c3, c4;
	int min, max, mk, vk;


	printf("Unesite jedan cetvorocifreni broj x: ");
		scanf("%d", &x);

	if(x>-10000 && x<-999 || x>999 && x<10000){

	c1=x/1000;
	c2=(x/100)%10;
	c3=(x/10)%10;
	c4=x%10;

	if(c1<c2 && c1<c3 && c1<c4){
		min=c1;
		mk=1000;
	}if(c1>c2 && c1>c3 && c1>c4){
		max=c1;
		vk=1000;
	}if(c2<c1 && c2<c3 && c2<c4){
		min=c2;
		mk=100;
	}if(c2>c1 && c2>c3 && c2>c4){
		max=c2;
		vk=100;
	}if(c3<c1 && c3<c2 && c3<c4){
		min=c3;
		mk=10;
	}if(c3>c1 && c3>c2 && c3>c4){
		max=c3;
		vk=10;
	}if(c4<c1 && c4<c2 && c4<c3){
		min=c4;
		mk=1;
	}if(c4>c1 && c4>c2 && c4>c3){
		max=c4;
		vk=1;
	}

	printf("Minimum je %d, a maksimum %d.\n", min, max);
	printf("Vk je %d, a mk je %d.\n", vk, mk);
	
	x1=x-(max*vk+min*mk);
	x2=x1+max*mk+min*vk;
	
	printf("Nakon zamene najvece i najmanje cifre broj iznosi %d.\n", x2);
	
	}else{
		printf("Uneti broj nije cetvorocifren.\n");
	}

return 0;
}
