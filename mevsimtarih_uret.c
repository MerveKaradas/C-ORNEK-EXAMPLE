#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Kendisine g�nderilen adet ve mevsim dilimi( sonbahar i�in 's', ilkbahar i�in 'i', k�� i�in 'k',  yaz i�in 'y')
biligisine g�re ; gelecek 50 y�l i�inde istenen mevsimde, istenen adet kadar rastgele tarihi ekrana yazan bir fonksiyon olu�turulacak.
NOT : 12-1-2 aylar� k��, 3-4-5 aylar� ilkbahar , 6-7-8 aylar� yaz , 9-10-11 aylar� sonbahard�r  */

void tarihUret(int adet,char mevsim)
{
	int yil=0,gun=0,ay=0,i;
	
	srand(time(NULL));
	if(mevsim == 's')
	{	
		for( i=1 ; i<=adet ; i++ )
		{
			yil= 2022 + rand()%51;
	    	ay= 9 + rand()%3;
		    gun= 1+ rand()%30;
			printf("%d / %d / %d \n",gun,ay,yil);
		}
	}
	else if(mevsim == 'k')
	{
		for( i=1 ; i<=adet ; i++ )
		{
			yil= 2022 + rand()%51;
			gun= 1+ rand()%30;
	    	while(1)
	    	{
	    		ay= 1 + rand()%12 ;
	    		if( ay == 1 || ay == 2 || ay == 12 )
	    		{
	    			break;
				}
			}
		    
			printf("%d / %d / %d \n",gun,ay,yil);
			
			
		}
	}
	
	else if(mevsim == 'i')
	{
		for( i=1 ; i<=adet ; i++ )
		{
			yil= 2022 + rand()%51;
	    	ay= 3 + rand()%3;
		    gun= 1+ rand()%30;
			printf("%d / %d / %d \n",gun,ay,yil);
		}
	}
	
	else if(mevsim == 'y')
	{
		for( i=1 ; i<=adet ; i++ )
		{
			yil= 2022 + rand()%51;
	    	ay= 6 + rand()%3;
		    gun= 1+ rand()%30;
			printf("%d / %d / %d \n",gun,ay,yil);
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	char mevsim;
	int adet;
	
	printf("Hangi mevsim icin tarih uretmek istiyorsunuz? (s/k/i/y) :  ");
	scanf("%s",&mevsim);
	
	while(1)
	{
	
		if( mevsim == 's' || mevsim == 'k' || mevsim == 'i' || mevsim == 'y')
		{
			break;
		}
		else
		{
			printf("HATA! Bildirilen degerlerden birini giriniz : ");
			scanf("%c",&mevsim);
		}
	}
	
	printf("Kac adet tarih uretmek istiyorsunuz? :  ");
	scanf("%d",&adet);
	
	tarihUret(adet,mevsim);
	
	
	return 0;
}
