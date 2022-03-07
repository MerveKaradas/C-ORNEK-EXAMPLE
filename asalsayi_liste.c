#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void asalyaz(int bas,int bit)
{
	
	int i,j,asal;
	
	if( bas >= bit )
	{
		printf("Baslangic ve bitis degerlerini uygun bir formatta giriniz...");
	}
	else
	{
		for( i=bas ; i<=bit ; i++)
	    {
	    	asal=1;
		    for( j=2 ; j<i ; j++ )
		    {
		    	if( i%j==0 )
			    {
			    	asal=0;
		    	}
	    	}
		
	
		if(asal==1)
		{
			if( 1 < i)
			{
				printf("%d sayisi ASAL bir sayidir \n",i);
			}
		
		}
	
		
    	}
	}
}

int main(int argc, char *argv[]) {
	
	int bas,bit;
	
	printf("Asal sayilarin listelenmesi icin sayi baslangic ve bitis degerlerini giriniz :   ");
	scanf("%d%d",&bas,&bit);
	
	asalyaz(bas,bit);
	
	return 0;
}
