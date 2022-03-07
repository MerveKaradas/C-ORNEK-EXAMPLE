#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int asalmi(int x)
{
	int i;
	
	if( x<=1 )
	{
		printf("Sayi ASAL DEGILDIR");
		return 0;
	}
	else
	{
		for( i=2 ; i<x ; i++)
    	{  
		if( x%i == 0)
		{
			printf("Sayi ASAL DEGILDIR");
			return 0;
			
		}
	}
	printf("Sayi ASALDIR");
	return 1;
	
	}
}

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("Asal sayi kontrolu yapilacak olan sayiyi giriniz :  ");
	scanf("%d",&x);
	
	asalmi(x);
	

	return 0;
}
