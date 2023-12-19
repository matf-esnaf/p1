#include <stdio.h>

int main()
{

	int x, c1, c2, c3, c4, mp;
		
	printf("Uneti jedan cetvorocifreni broj: ");
		scanf("%d", &x);

	if(x>-10000 && x<-999 || x>999 && x<10000){
	
		c1=x/1000;
		c4=x%10;
		c2=(x/100)%10;
		c3=(x/10)%10;

		mp=0;

	if(c1%2==0){
		c1=c1;
	}else{
		c1=1;

	}if(c2%2==0){
		c2=c2;
	}else{
		c2=1;
	
	}if(c3%2==0){
		c3=c3;
	}else{
		c3=1;
	
	}if(c4%2==0){
		c4=c4;
	}else{
		c4=1;

	}if(c1==1 && c2==1 && c3==1 && c4==1){
		printf("Nema parnih cifara u vasem unosu.\n");
	}else{
	
	mp=c1*c2*c3*c4;
	
	printf("Proizvod cifara iznosi %d.\n", mp);

	}
	
	}else{
		printf("Uneti broj nije cetvorocifren.\n");
	}

return 0;
}
