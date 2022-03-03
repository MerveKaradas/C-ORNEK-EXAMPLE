#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=1,b=1,temp=0,adim,i;
	
	printf("Fibonacci serimiz kaç adým olsun? :  ");
	scanf("%d",&adim);
	
	printf("%d\n%d\n",a,b);
	
	for(i=1 ; i<=adim-2 ; i++ )
	{
		temp=a;
		a=b+a;
		b=temp;
		printf("%d \n",a);

	}
	
	
	return 0;
}
