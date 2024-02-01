#include <stdio.h>
#include <string.h>

void get(){

	int x;

	printf("Enter:\n");
	x=getchar();

	printf("Entered char:\n");
	putchar(x);
}

int main(){

	get();

	return 0;
}
