#include <stdio.h>
#include <stdlib.h>

/* NOT: 1TL, 50kr, 25kr ve 10kr bir tanesinin aðýrlýðý sýrasýyla 8,2gr , 6,8gr , 4gr ve 3,15gr kadardýr */

float cevirTL(float birTL,float elliKR,float yrbesKR,float onKR)
{
    float nbirTL=birTL*1000/8.2; // birTL adeti
	float nelliKR=elliKR*1000/6.8;
	float nyrbesKR=yrbesKR*1000/4;
	float nonKR=onKR*1000/3.15;
	
	float toplam=nbirTL*1 + nelliKR*0.5 + nyrbesKR*0.25 + nonKR*0.10;
	
	printf("Bozukluklarin toplam ederi = %.3f TL ",toplam);
}

int main(int argc, char *argv[]) {
	
	float birTL,elliKR,yrbesKR,onKR;
	
	printf("Bozukluklarin agirliklarini sirasiyla kg cinsinden giriniz (Sirasiyla 1TL, 50kurus, 25 kurus, 10kurus) : \n");
	scanf("%f%f%f%f",&birTL,&elliKR,&yrbesKR,&onKR);
	
	printf("------------------------------------------------------------------------------------------------------------\n");
	cevirTL(birTL,elliKR,yrbesKR,onKR);
	return 0;
}
