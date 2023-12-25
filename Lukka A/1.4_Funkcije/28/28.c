#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int broj_dana_izmedju (int dan1, int mesec1, int godina1, int dan2, int mesec2, int godina2);
int ispravan_datum (int dan, int mesec, int godina);
int prestupna (int godina);

int main(){

	int d1, m1, g1;
	int d2, m2, g2;

	printf("Unesite prvi datum (dd.mm.gggg.): ");
	scanf("%d. %d. %d.", &d1, &m1, &g1);

	if(ispravan_datum(d1, m1, g1)==1){
		printf("Neispravan unos.\n");
		return -1;
	}

	printf("Unesite prvi datum (dd.mm.gggg.): ");
	scanf("%d. %d. %d.", &d2, &m2, &g2);

	if(ispravan_datum(d2, m2, g2)==1){
		printf("Neispravan unos.\n");
		return -1;
	}

	printf("Broj dana izmedju ova dva datuma iznos: %d.", broj_dana_izmedju (d1, m1, g1, d2, m2, g2));

	return 0;
}

int ispravan_datum (int dan, int mesec, int godina){

	if(dan>=31 && mesec<=6 && mesec%2==0){
		return 1;
	}

	if(dan>=31 && mesec>=7 && mesec%2!=0){
		return 1;
	}

	if(dan==29 && mesec==2 && prestupna(godina)!=1){
		return 1;
	}

	return 0;
}

int prestupna (int godina){

	if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
		return 1;
	}
	
	return 0;
}


int broj_dana_mesec (int mesec, int godina){

	if(mesec==2 && prestupna(godina)==1){
		return 29;
	}

	if(mesec==2 && prestupna(godina)==0){
		return 28;
	}	

	if(mesec<=6 && mesec%2!=0){
		return 31;
	}	

	if(mesec >=7 && mesec%2==0){
		return 31;
	}

	return 30;
}

int broj_dana_izmedju (int dan1, int mesec1, int godina1, int dan2, int mesec2, int godina2){


	int br_prestupnih=0, br_normalnih=0;

	if(godina1>godina2){
		for(; abs(godina2)<=abs(godina1); godina2++){
			if(prestupna(godina2)==1){
				br_prestupnih++;
			}
		}

	}else if(godina1<godina2){
		for(; abs(godina1)<=abs(godina2); godina1++){
			if(prestupna(godina1)==1){
				br_prestupnih++;
			}
		}
	}

	int n=(br_prestupnih*366) + (br_normalnih*365);

	n=n-(dan1+dan2);

	int mi1=1, mi2=1, dani_mesec=0;;

	for(; mi1<mesec1; mi1++){
		dani_mesec+=broj_dana_mesec(mi1, godina1);
	}

	for(; mi2<mesec2; mi2++){
		dani_mesec+=broj_dana_mesec(mi2, godina2);
	}

	n=n-dani_mesec;

	return n;
}
