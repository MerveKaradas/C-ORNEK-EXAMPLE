#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Kendisine g�nderilen zaman dilimi de�erine g�re(sabah i�in's', ��le i�in 'o', ak�am i�in 'a' ) bilgisine g�re o zaman diliminde rastgele bir zaman� ekrana yazan zamanUret fonksiyonu yaz
NOT : sabah dilimi 08:00:00- 10:59:59, ��le dilimi 11:00:00-15:59:59, Ak�am 16:00:00-22:59:59  */

void zamanUret(char vakit)
{
	srand(time(NULL));
	int saat=0,dakika=0,saniye=0;
	
	if( vakit == 's')
	{
		saat = 8 + rand()%3;
		dakika = rand()%60;
		saniye = rand()%60;
		
		printf("%d:%d:%d",saat,dakika,saniye);
		
	}
	else if( vakit == 'o')
	{
		saat = 11 + rand()%5;
		dakika = rand()%60;
		saniye = rand()%60;
		
		printf("%d:%d:%d",saat,dakika,saniye);
	}
	else if( vakit == 'a')
	{
		saat = 16 + rand()%7;
		dakika = rand()%60;
		saniye = rand()%60;
		
		printf("%d:%d:%d",saat,dakika,saniye);
	}

}

int main(int argc, char *argv[]) {
	
	char vakit;
	
	printf("Hangi zaman dilimi icin islem yapmak istiyorsunuz? (s/o/a):  ");
	scanf("%s",&vakit);
	
	while(1)
	{
		if( vakit == 'a' || vakit == 'o' || vakit == 's' )
		{
			zamanUret(vakit);
			break;
		}
		else
		{
			printf("Hatali zaman dilimi girdiniz. Tanimlanan degerlerden giriniz :  ");
			scanf("%s",&vakit);
		}
	}
	
	
	return 0;
}
