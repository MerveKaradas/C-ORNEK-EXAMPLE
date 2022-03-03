#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max(int sayi[],int adet)
{
	int maks,i;
	
	maks=sayi[0];
	
	for( i=1 ; i<adet ; i++ )
	{
		if( maks < sayi[i] )
		{
			maks=sayi[i];
		}
	}
	
	return maks;
}

int main(int argc, char *argv[]) {
	
	int i,adet;
	
	while(1)
	{
		printf("Kac sayi girmek istiyorsunuz ? =  ");
	    scanf("%d",&adet);
	    
	    if(adet <= 0 )
	    {
	    	printf("Adet 0 ya da negatif olamaz ");
		}
		else
		{
			break;
		}
	}
	
	printf("%d adet sayiyi giriniz : \n",adet);
	
	int sayi[adet];
	
	for( i=0 ; i < adet ; i++ )
	{
		scanf("%d",&sayi[i]);
	}
	
	
	printf("Girilen sayilardan en buyugu  %d sayisidir ",max(sayi,adet));
	
	return 0;
}
