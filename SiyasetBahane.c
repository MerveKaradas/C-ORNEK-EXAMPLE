#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Uyan�k bir siyaset�i kendi �lkesinde ne zaman k�t� bir �ey olsa mutlaka di�er �lkelerden birini su�layarak bahane �retmeyi al��kanl�k haline getirmi�tir. 
Hi�bir zaman bir �nceki bahanesinde hedef g�sterdi�i �lkeyi tekrar etmemektedir.Ne zaman gazeteciler yorum isteseler, dan��man� bir �nceki bahanede kullan�landan ba�ka 
rastgele bir �lke ad�n� ka��da yazarak eline tut�turmaktad�r.Dan��man�n i�ini kolayla�t�racak bahaneYaz fonksiyonu yaz. */

 // Amerika=1,Japonya=2,Ispanya=3,Fransa=4,Rusya=5,Katar=6,Almanya=7,Ingiltere=8,Cin=9,Turkiye=10;

void bahaneYaz(int bahane )
{
	int ulke ;
	
	srand(time(NULL));
	while(1)
	{
	    ulke = rand()%10 + 1 ;
	    if( ulke == bahane )
	    {
	    	continue;
		}
		else
		{
			break;
		}
	}
	
    
	switch(ulke)
	{
		case 1 :
		{
			printf("Bu isin arkasinda Amerika vardir ! "); break;
		}
		case 2 :
		{
			printf("Bu isin arkasinda Japonya vardir ! "); break;
		}	
	   case 3 :
		{
			printf("Bu isin arkasinda Ispanya vardir ! "); break;
		}
		case 4 :
		{
			printf("Bu isin arkasinda Fransa vardir ! "); break;
		}
		case 5 :
		{
			printf("Bu isin arkasinda Rusya vardir ! "); break;
		}	
		case 6 :
		{
			printf("Bu isin arkasinda Katar vardir ! "); break;
		}	
		case 7 :
		{
			printf("Bu isin arkasinda Almanya vardir ! "); break;
		}
		case 8 :
		{
			printf("Bu isin arkasinda Ingiltere vardir ! "); break;
		}
		case 9 :
		{
			printf("Bu isin arkasinda Cin vardir ! "); break;
		}
		case 10 :
		{
			printf("Bu isin arkasinda Turkiye vardir ! "); break;
		}	
		
    }
	
	
	
}

int main(int argc, char *argv[]) {
	
	
	int bahane;
	
	printf("Hangi sayi ile tanimlanan ulke haricinde bir bahane olusturmak istiyorsunuz ? :  ");
	while(1)
	{
		scanf("%d",&bahane);
		
		if( bahane <= 10 && bahane >= 1 )
		{
			break;
		}
		else
		{
			printf("Hatali sayi girisi ! Lutfen 1-10 arasi tanimlanan ulkelerden birini seciniz :  ");
		}
	}

	bahaneYaz(bahane);
	
	
	
	return 0;
}
