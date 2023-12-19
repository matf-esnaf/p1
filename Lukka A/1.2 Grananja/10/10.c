#include <stdio.h>
#include <ctype.h>

int main()
{

	char a, b, c;

	printf("Unesite kod abc: ");
		scanf("%c %c %c", &a, &b, &c);

	if(isalnum(a) && isalnum(b) && isalnum(c)){
		if(isupper(a)){
			a=tolower(a);
		}
		if(isupper(b)){
			b=tolower(b);
		}
		if(isupper(c)){
			c=tolower(c);
		}	

	printf("Kod je %c%c%c.\n", a, b, c);

	}else{
		printf("Dati unos nije tacan.");
	}


return 0;
}
