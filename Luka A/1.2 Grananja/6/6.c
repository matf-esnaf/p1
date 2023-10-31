#include <stdio.h>

#define H 23
#define M 60

int main()
{

	int x, y, hr, min;

	printf("Uneti vreme u formatu hr:min:");
		scanf("%d%d", &x, &y);

	if(x>=24 || y>=60){
		printf("Greska: Neispravan unos vremena.");
	}else{
		hr=H-x;
		min=M-y;

	printf("Do ponoci je ostalo %d sati i %d minuta.\n", hr, min);
	}

return 0;
}
