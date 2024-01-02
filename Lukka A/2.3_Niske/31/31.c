#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MIN 1
#define MAX 16

unsigned int udekadni (char broj[], unsigned int osnova);
void izdekadnog (unsigned int broj, unsigned int osnova, char rezultat[]);

int main(){

	char s[21];
	int o1, o2;
	char s1[21];

	printf("Unesite broj n, o1 i o2: ");
	scanf("%s", s);
	scanf("%d", &o1);
	scanf("%d", &o2);

	if(o1<MIN || o1>MAX || o2<MIN || o2>MAX){
		printf("\n-1\n");
		return -1;
	}

	int newnumber = udekadni (s, o1);

	printf("\nDekadna vrednost broja: %d.", newnumber);

	izdekadnog (newnumber, o2, s1);

	printf("\nVrednost broja %d u sistemu %d je %s.", newnumber, o2, s1);

	return 0;
}

unsigned int udekadni (char broj[], unsigned int osnova){

	int d = strlen (broj);
	unsigned int newnumber=0;
	int j=d-1;

	for(int i=0; i<d; i++){
		newnumber += (broj[i] - '0') * (pow (osnova, j));
		j--;
	}

	return newnumber;
}

void izdekadnog (unsigned int broj, unsigned int osnova, char rezultat[]){

	int ostatak = 0;
	int temp = broj;
	int i;

	for(i=0; temp>0; i++){
		ostatak = temp % osnova;
		if(ostatak>=10){
			rezultat[i] = 'A' + (ostatak - 10);
		}else{
			rezultat[i]=ostatak+'0';
		}
		temp/=osnova;
	}

	int duzina = i;

	for(int start=0, kraj=duzina-1; start<kraj; start++, kraj--){
		char privremeno = rezultat [start];
		rezultat [start] = rezultat [kraj];
		rezultat [kraj] = privremeno;
	}

	rezultat[i]='\0';
}
