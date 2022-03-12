#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ekok(float a, float b)
{
	int x=1;
	
	while(1)
	{
		if( ( x % (int)a == 0) && ( x % (int)b == 0))
		{
			return x;
			
		}
		x++;
	}
}


int main(int argc, char *argv[]) {
	
	float a,b;
	
	printf("Lutfen 2 adet tamsayi giriniz :  ");
	scanf("%f%f", &a,&b);
	
	if( ( a - (int)a == 0) && ( b - (int)b == 0) )
	{
		printf("%.0f ve %.0f sayilarinin en kucuk ortak kati %d'dir",a,b,ekok(a,b));
	}
	else
	{
		printf("Lutfen sayilari tamsayi formatinda giriniz ! ");
	}
	
	
	return 0;
}
