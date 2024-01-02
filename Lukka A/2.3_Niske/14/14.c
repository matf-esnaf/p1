#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 21

void kopiraj (char s[], char t[], int n);

int main(){

	char s[MAX];
	int n;

	printf("Unesite nisku: ");
	scanf("%s", s);

	printf("Unesite cifru n: ");
	scanf("%d", &n);

	char t[n];

	kopiraj (s, t, n);

	printf("Nova niska: %s.\n", t);

	return 0;
}

void kopiraj (char s[], char t[], int n){

	strncpy (t, s, n);
}
