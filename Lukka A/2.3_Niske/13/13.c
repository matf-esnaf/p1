#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

int main(){

	int n;
	char s[21], s1[21];

	printf("Unesite nisku: ");
	scanf("%s", s);

	printf("Unesite broj: ");
	scanf("%d", &n);

	if(n<0 || n>10){
		printf("Nekorektan unos.\n");
		return -1;
	}

	strcpy (s1, s);
	char c[0];

	c[0]='-';

	for(int i=0; i<n-1; i++){
		strcat (s, c);
		strcat (s, s1);
	}

	printf("Nova niska: %s.", s);

	return 0;
}
