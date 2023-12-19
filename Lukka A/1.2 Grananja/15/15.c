#include <stdio.h>

int main()
{

	int x;
	int c1, c2, c3, c4;

	printf("Uneti jedan cetvorocifreni broj: ");
		scanf("%d", &x);

	if(x>-10000 && x<-999 || x>999 && x<10000){

	c1=x/1000;
	c2=(x/100)%10;
	c3=(x/10)%10;
	c4=x%10;

	if(x<10000 && x>999){

	if(c1<=c2 && c2<=c3 && c3<=c4){
		printf("Cifre su uredjene neopadajuce.\n");

	if(c1>=c2 && c2>=c3 && c3>=c4)
		printf("Cifre su uredjene nerastuce.\n");
	}else{
		printf("Cifre nisu uredjene.\n");
	}
	
	}if(x>-10000 && x<-999){
	
	if(c1<=c2 && c2<=c3 && c3<=c4){
		printf("Cifre su uredjene nerastuce.\n");

	if(c1>=c2 && c2>=c3 && c3>=c4)
		printf("Cifre su uredjene neopadajuce..\n");
	
	}else{
		printf("Cifre nisu uredjene.\n");
	}
	}
	}else{
		printf("Uneti broj nije cetvorocifren.\n");
	}
return 0;
}
