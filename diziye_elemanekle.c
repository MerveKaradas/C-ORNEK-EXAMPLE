#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void yenidizi(int dizi[] ,int eleman ,int sira , int deger  )
{
	int i,temp;
	
	if( sira <= eleman + 1)
	{
		printf("Yeni eleman eklenmeden onceki hali \n");
    	for( i=0 ; i< eleman ; i++ )
	    {
		printf("dizi[%d] = %d \n",i,dizi[i]);
	    }
	
	
     	printf("Yeni eleman eklendikten sonraki hali \n");
	    for( i=eleman-1 ; i>= sira-1 ; i-- )
    	{
		dizi[i+1]=dizi[i];
    	}
	    dizi[sira-1]=deger;
		
	    for( i=0 ; i< eleman+1 ; i++ )
    	{
		printf("dizi[%d] = %d \n",i,dizi[i]);
	    }
	}
	else
	{
		printf("HATA! sira numarasi dogru bicimde girilmedi!");
	}
	
	
}


int main(int argc, char *argv[]) {
	
	int eleman,i,sira,deger;
	
	printf("Olusturulacak dizi kac elemanli olsun? : ");
	scanf("%d",&eleman);
	
	int dizi[eleman];
	
	srand(time(NULL));
	for( i=0 ; i<eleman ; i++ )
	{
		dizi[i]=rand()%100;
		printf("dizi[%d] = %d \n",i,dizi[i]);
	}
	
	printf("Eklenecek dizi kacinci sirada olsun? :  ");
	scanf("%d",&sira);
	
	printf("Eklenecek eleman degeri nedir? :  ");
	scanf("%d",&deger);
	
	yenidizi(dizi,eleman,sira,deger);
	
	
	return 0;
}
