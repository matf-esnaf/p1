#include <stdio.h>
int main()
{

	char c;

	printf("Unesite karakter: ");
		scanf("%c", &c);

	printf("Ascii kod unetog karatkera: %d.\n", c);

	if(c>='A' && c<='Z'){
		printf("Odgovarajuce malo slovo: %c.\n", c+32);
		printf("Ascii kod malog slova: %d.\n", c+32);
	
	}if(c>='a' && c<='z'){
		printf("Odgovarajuce veliko slovo: %c.\n", c-32);
		printf("Ascii kod velikog slova: %d.\n", c-32);
	}

return 0;
}
