#include <stdio.h>
int main()
{

	float x;

	printf("Uneti ceo broj x:");
		scanf("%f", &x);

	if(x==0){
		printf("Dati unos nije tacan.\n");
	
	}else{
		x=1/x;
	printf("Reciprocna vrednost broja x iznosi %.4f.\n", x);
	}

return 0;
}
