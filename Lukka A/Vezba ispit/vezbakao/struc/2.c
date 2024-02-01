#include <stdio.h>
#include <string.h>

union RECTANGLE{
	int x;
	int y;
	char ime[50];
};

int main(){

	union RECTANGLE first;

	//GRESKA

//	first.x=10;
//	first.y=20;
//	strcpy(first.ime, "onajstosamte jebo");

//	printf("\n%d ---- %d ---- %s\n", first.x, first.y, first.ime);


	//TACNO

	first.x=10;
	printf("\n%d\n", first.x);

	first.y=20;
	printf("\n%d\n", first.y);

	strcpy(first.ime, "onaj sto sam te jebo");
	printf("\n%s\n", first.ime);


	return 0;
}
