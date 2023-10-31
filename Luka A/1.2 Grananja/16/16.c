#include <stdio.h>

int main()
{

	float x1, y1;
	float x2, y2;

	printf("Unesite koordinate tacke A: ");
		scanf("%f %f", &x1, &y1);
	printf("Unesite koordinate tacke B: ");
		scanf("%f %f", &x2, &y2);
		
	if(y1>=0 && y2>=0 && x1>=0 && x2>=0){
		printf("A i B se nalaze u istom kvadrantu.\n");
	}else if(y1>=0 && y2>=0 && x1<=0 && x2<=0){
		printf("A i B se nalaze u istom kvadrantu.\n");
	}else if(y1<=0 && y2<=0 && x1>=0 && x2>=0){
		printf("A i B se nalaze u istom kvadrantu.\n");
	}else if(y1<=0 && y2<=0 && x1<=0 && x2<=0){
		printf("A i B se nalaze u istom kvadrantu.\n");
	}else{
		printf("A i B se ne nalaze u istom kvadrantu.\n");
	}

return 0;
}
