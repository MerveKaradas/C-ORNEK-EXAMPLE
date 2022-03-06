#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int elemansil(int array[],int adet,int elno)
{
	
	if( elno > adet)
	{
		printf("HATA!Eleman sayi numarasi adeti gecemez!");
		return 0;
	}
	else
	{
		
		
		int i;
		
		for( i=elno-1 ; i<adet-1; i++ )
		{
			array[i]=array[i+1];
		}
		
		for( i=0 ; i<adet-1 ; i++ )
		{
			printf("%d\n",array[i]);
		}
	
	}
	
	
}

int main(int argc, char *argv[]) {
	
	int n,x,i;
	
	printf("Kac adet eleman uretilsin? :  ");
	scanf("%d",&n);
	
	int array[n];
	
	srand(time(NULL));
	printf("Silinmeden onceki elemanlar : \n");
	for( i=0 ; i<n ; i++ )
	{
		array[i]= rand()%100;
		printf("%d\n",array[i]);
	}
	
	printf("Hangi numaradaki elemani silmek istersiniz? :  ");
	scanf("%d",&x);
	
	elemansil(array,n,x);
	
	return 0;
}
