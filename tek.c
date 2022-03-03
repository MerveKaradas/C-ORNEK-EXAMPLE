#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tek(int x)
{
	int i;
	
	for(i=1 ; i<=x ; i++)
	{
		if( i%2 == 1 )
		{
			printf("%d \n",i);
		}
	}
	
	
}

int main(int argc, char *argv[]) {
	
	int  x;
	
	printf("Hangi sayiya kadar var olan tek sayilari siralamak istiyorsunuz ? :  ");
	scanf("%d",&x);
	 
	tek(x); 
	return 0;
}
