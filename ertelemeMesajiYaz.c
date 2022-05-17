#include <stdio.h>
#include <stdlib.h>

/* S�z�nde durmayan bir esnaf kendisine g�nderilen t�m teslimat mesajlar� i�in i�inde bulunan g�n d���nda ba�ka bir g�n s�yleyerek s�rekli ertelemektedir. 
Esnaf�n i�ini kolayla�t�racak bir fonksiyon yaz.Fonksiyon kendisine g�nderilen g�n de�erinden farkl� rastgele bir g�n de�eri belirleyerek teslimat�n o g�n yap�laca�� mesaj�n� ekrana yazd�r�r. */

// PAZAR=1,PAZARTES�=2,SALI=3,�AR�AMBA=4,PER�EMBE=5,CUMA=6,CUMARTES�=7 

void ertelemeMesajiYaz( int bugun)
{
	srand(time(NULL));
	int ertelenengun;
	
	while(1)
	{
		ertelenengun = rand()%7 +1 ;
		if( ertelenengun == bugun )
		{
			continue;
		}
		else
		{
			break;
		}
	}
	
	switch(ertelenengun)
	{
		case 1:
		{
			printf("Pazar gunu teslimat yapilacak "); break;
		}	
		case 2:
		{
			printf("Pazartesi gunu teslimat yapilacak "); break;
		}	
		case 3:
		{
			printf("Sali gunu teslimat yapilacak "); break;
		}	
		case 4:
		{
			printf("Carsamba gunu teslimat yapilacak "); break;
		}	
		case 5:
		{
			printf("Persembe gunu teslimat yapilacak "); break;
		}	
		case 6:
		{
			printf("Cuma gunu teslimat yapilacak "); break;
		}	
		case 7:
		{
			printf("Cumartesi gunu teslimat yapilacak "); break;
		}	
	}
}

int main(int argc, char *argv[]) {
	
	int bahane;
	
	printf("Icinde bulundugunuz gun degeri haricinde bahane olusturmak icin bir gun degeri giriniz :  ");
	
	while(1)
	{
		scanf("%d",&bahane);
		if( bahane <= 7 && bahane >=1 )
		{
			break;
		}
		else
		{
			printf("Hatali gun sayi degeri girisi ! Lutfen 1-7 arasinda bir gun degeri seciniz :  ");
			continue;
		}
	}
	
	ertelemeMesajiYaz(bahane);
	return 0;
}


