#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fact(int y)
{
	int i,fac=1;
	
	for( i=1 ; i<=y ; i++ )
	{
		fac*=i;
	} 
	
	return fac;
}

int main(int argc, char *argv[]) {
	
	int x;
	
	while(1)
	{
		printf("Faktoriyeli alinacak sayiyi giriniz :  ");
    	scanf("%d",&x);
    	
    	if( x < 0 )
    	{
    		printf("Sayi negatif olamaz ! ");
		}
		else
		{
			break;
		}
	}
	
	if( x==0 )
	{
		printf("%d sayisinin faktoriyeli = 1'dir ",x);
	}
	else
	{
		printf("%d sayisinin faktoriyeli = %d'dir ",x,fact(x));
	}

	
	
	return 0;
}
