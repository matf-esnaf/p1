#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

	char s[31], t[31];

	printf("Unesite nisku: ");
	scanf("%30s", s);

	strcpy (t, s);
	strcat (s, t);
	strcat (s, t);

	printf("Nova niska: %s.\n", s);

	return 0;
}
