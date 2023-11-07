#include <stdio.h>
int main()
{

	int x;

	printf("Unesite ceo broj x: ");
		scanf("%d", &x);

	if(x!=0){

	while(x%10==0){
		x=x/10;
	}

	printf("Bez nula broj iznosi %d.\n", x);
	
	}else{
		printf("Broj nula nije definisan u deljenju.\n");
	return 1;
	}
return 0;
}
