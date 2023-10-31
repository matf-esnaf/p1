#include <stdio.h>
int main()
{

	char x, y, z;
	int x1, y1, z1;
	
	x1=1;
	y1=1;
	z1=1;

	printf("Unesite 3 karaktera po zelji: ");
		scanf("%c %c %c", &x, &y, &z);

	if(x<'0' || x>'9'){
		x=x1;
	}else{
		x=x - '0';
	}

	if(y<'0' || y>'9'){
		y=y1;
	}else{
		y= y- '0';
	}

	if(z<'0' || z>'9'){
		z=z1;
	}else{
		z= z- '0';
	}

	if(x==1 && y==1 && z==1){
		printf("Ni jedan on unetih karaktera nije cifra.\n");
	}else{
		printf("Proizvod karaktera koji su cifre iznosi: %d.\n", x*y*z);
	}

return 0;
}
