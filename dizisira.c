#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void elemansirala(int array[],int x)
{
	int i,j,temp=0;
	
	for( i=0 ; i<x ; i++ )
	{
		for( j=i+1 ; j<x ; j++ )
		{
			if( array[i] > array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	printf("Dizinin kucukten buyuge siralanmis hali :  \n");
	for( i=0 ; i<x ; i++ )
	{
		printf("%d \n",array[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int x,i;
	
	printf("Kac elemanli bir dizi olusturmak istiyorsunuz ? :  ");
	scanf("%d",&x);
	
	int array[x];
	
	srand(time(NULL));
	for( i=0 ; i<x ; i++ )
	{
		array[i]= rand()%100;
		printf("array[%d] = %d \n",i,array[i]);
	}
	
	elemansirala(array,x);
	
	
	return 0;
}
