#include <stdio.h>
#include <stdlib.h>

/* Sözünde durmayan bir esnaf kendisine gönderilen tüm teslimat mesajlarý için içinde bulunan gün dýþýnda baþka bir gün söyleyerek sürekli ertelemektedir. 
Esnafýn iþini kolaylaþtýracak bir fonksiyon yaz.Fonksiyon kendisine gönderilen gün deðerinden farklý rastgele bir gün deðeri belirleyerek teslimatýn o gün yapýlacaðý mesajýný ekrana yazdýrýr. */

// PAZAR=1,PAZARTESÝ=2,SALI=3,ÇARÞAMBA=4,PERÞEMBE=5,CUMA=6,CUMARTESÝ=7 

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


