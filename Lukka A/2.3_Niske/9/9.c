#include <stdio.h>
#include <string.h>

#define MAX 101

void skrati (char s[]);

int main(){

	char s[MAX];
	char z[MAX];

	z[0]='*';


	printf("Unesite nisku: ");
	scanf("%100s", s);
		
	strcat (s, z);
	strcat (z, s);

	printf("\n%s", z);

	return 0;
}
