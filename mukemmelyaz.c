#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mukemmelyaz( int bas, int son)
{
	int i,j,toplam;
	
	for( i=bas ; i<=son ; i++)
	{
		toplam=0;
		for( j=1 ; j<i ; j++ )
		{
			if( i%j==0 )
			{
				toplam +=j;
			}
		}
		
		if( i==toplam )
		{
			printf("%d sayisi mukemmel sayidir \n",i);
		}
	}
}
int main(int argc, char *argv[]) {
	
	int bas,bit;
	
	printf("Mukemmel sayilari olusturmak icin baslangic ve bitis degerlerini giriniz :  ");
	scanf("%d%d",&bas,&bit);
	
	mukemmelyaz(bas,bit);
	
	return 0;
}
