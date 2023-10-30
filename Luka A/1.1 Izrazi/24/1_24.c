#include <stdio.h>
#include <math.h>

int main()
{

	float a, b, c, S, P, O;

	printf("Unesite duzine stranica a, b i c:");
		scanf("%f%f%f", &a, &b, &c);

	S=(a+b+c)/2; //S-poluobim
	P=sqrt(S*(S-a)*(S-b)*(S-c)); //P-povrsina
	O=a+b+c; //O-obim

	printf("Obim:%.2f\n", O);
	printf("Povrsina:%.2f\n", P);

return 0;
}
