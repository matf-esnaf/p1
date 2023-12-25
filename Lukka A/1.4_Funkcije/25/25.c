#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prestupna (int godina);
int broj_dana (int mesec, int godina);
int ispravan (int dan, int mesec, int godina);
void sledeci_dan (int dan, int mesec, int godina);

int main(){

	int a, b, c, a1, b1, c1;

	printf("Unesite jedan datum: ");
	scanf("%d. %d. %d.", &a, &b, &c);
	

	if(ispravan(a, b, c)==1){
		printf("Neispravan unos.\n");
		return -1;
	}

	sledeci_dan (a, b, c);

	return 0;
}

int ispravan (int dan, int mesec, int godina){

	if(dan>=32 || mesec>=13){
		return 1;
	}

	if(dan==29 && prestupna(godina)==0){
		return 1;
	}

	if(dan==31 && mesec<=6 && mesec%2==0){
		return 1;
	}

	if(dan==31 && mesec>=7 && mesec%2!=0){
		return 1;
	}

	return 0;
}	

int prestupna (int godina){

	if(godina/4==0){
		return 1;
	}
	return 0;
}

int broj_dana (int mesec, int godina){

	if(mesec==2 && prestupna(godina)==1){
		return 29;
	}else if(mesec==2 && prestupna(godina)==0){
		return 28;
	}

	if(mesec%2==0 || mesec==7){
		return 31;
	}
	return 30;
}

void sledeci_dan (int dan, int mesec, int godina){


	int dan1, mesec1, godina1;


	mesec1=broj_dana(mesec, godina);

	if(dan+1>mesec1){
		dan=1;
		mesec+=1;
	}else{
		dan+=1;
	}

	if(mesec+1>12){
		mesec=1;
		godina+=1;
	}

	printf("Datum sledeceg dana: %d. %d. %d.\n", dan, mesec, godina);

}
