#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int floyducgen(int line)
{
	int k=1,i,j;
	
	for( i=1 ; i<=line ; i++)
	{
		for( j=1 ; j<=i ; j++)
		{
			printf("%d  ",k);
			k++;
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	
	int line;
	
	printf("Kac satirlik bir ucgen olusturmak istiyorsunuz? :  ");
	scanf("%d",&line);
	
	floyducgen(line);
	
	return 0;
}
