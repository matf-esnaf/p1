#include <stdio.h>
#include <string.h>

struct Books{
	char Title[50];
	char Author[50];
	char Topic[100];
	int id;
}generic_book;

typedef char CHARACTER;
typedef char LONGLINES[];
typedef int SIZES;

int main(){

	CHARACTER c = 'A';
	LONGLINES cc = "------------";
	SIZES ccc = 10;

	printf("%c\n", c);
	printf("%s\n", cc);
	printf("%d\n", ccc);

	struct Books Book_1;

	strcpy(Book_1.Title, "Teorija relativita");
	strcpy(Book_1.Author, "Ajnstan Albert");
	strcpy(Book_1.Topic, "Fizika");
	Book_1.id=4323;

	printf("Title: %s.\n", Book_1.Title);
	printf("Autor: %s.\n", Book_1.Author);
	printf("Tema: %s.\n", Book_1.Topic);
	printf("ID: %d.\n", Book_1.id);

	return 0;
}
