#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Kendisine gönderilen adet ve mevsim dilimi( sonbahar için 's', ilkbahar için 'i', kýþ için 'k',  yaz için 'y')
biligisine göre ; gelecek 50 yýl içinde istenen mevsimde, istenen adet kadar rastgele tarihi ekrana yazan bir fonksiyon oluþturulacak.
NOT : 12-1-2 aylarý kýþ, 3-4-5 aylarý ilkbahar , 6-7-8 aylarý yaz , 9-10-11 aylarý sonbahardýr  */

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
