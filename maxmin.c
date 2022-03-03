#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int max(int array[],int x)
{
	int mak = array[0];
	int i;
	
	for( i=1 ; i<x ; i++ )
	{
		if(mak<array[i])
		{
			mak=array[i];
		}
	}
	printf("Maksimum olan deger %d'dir\n",mak);
}

int min(int array[],int x)
{
	int min=array[0],i;
	
	for( i=1 ; i<x ; i++ )
	{
		if(min>array[i])
		{
			min=array[i];
		}
	}
	printf("Minumum olan deger %d'dir",min);
}

int main(int argc, char *argv[]) {
	
	int i,x;
	
	printf("Kac adet eleman uretilsin? :  ");
	scanf("%d",&x);
	
	int array[x];
	
	srand(time(NULL));
	for( i=0 ; i<x ; i++ )
	{
		array[i] = rand()%100 ;
		printf("%d\n",array[i]);
	}
	
	max(array,x);
	min(array,x);
	
	return 0;
}
