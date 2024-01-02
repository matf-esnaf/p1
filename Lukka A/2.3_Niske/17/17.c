#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int heksa (char s[]);

int main(){

	char s[8];

	printf("Unesite heksadekacnu cifru: ");
	scanf("%s", s);

	if(heksa (s) == 1){
		printf("Korektan heksadekani broj.\n");
		return 0;
	}else{
		printf("Nekorektan heksadekani broj.\n");
		return -1;
	}
}

int heksa (char s[]){

		if(s[0] != '0'){
			return 0;
		}

		if(s[1] != 'x' && s[1] != 'X'){
			return 0;
		}

		// 0x 1234567890 abcdef ABCDEF
		
		int d = strlen (s);

		char kod[] = "abcdefABCDEF1234567890";

		int d1 = strlen (kod);

		for(int i=2; i<d; i++){
			int brojac=0;
			for(int j=0; j<d1; j++){
				if(s[i]==kod[j]){
					brojac++;
					continue;
				}
			}if(brojac==0){
				return 0;
			}
		}

		return 1;
}
