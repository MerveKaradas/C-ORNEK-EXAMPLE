#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ayristir(long int sure)
{
	int saat = sure/3600;
	int dakika = ( sure -saat*3600 )/60;
	int saniye = ( sure -saat*3600 -dakika*60 );
	
	printf("%d:%d:%d",saat,dakika,saniye);
	
}

int main(int argc, char *argv[]) {
	
	long int sure;
	
	printf("Lutfen saniye cinsinden sure giriniz :  ");
	scanf("%ld",&sure);
	
	ayristir(sure);
	
	return 0;
}
