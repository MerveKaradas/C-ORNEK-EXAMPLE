#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float toplam(float a,float b)
{
	return a+b;
}

float fark(float a,float b)
{
	return abs(a-b);
}

float carp(float a,float b)
{
	return a*b;
}

float bol(float a,float b)
{
	return a/b;
}


int main(int argc, char *argv[]) {
	
	float a,b;
	
	while(1)
	{
			printf("Lutfen 2 adet tam sayi bir sayi giriniz: ");
			scanf("%f%f",&a,&b);
			
			if( ( a - (int)a ) == 0 && ( b - (int)b ) == 0 )
			{
				break;
			}
			else
			{
				printf("Hatali sayi girisi ! Lutfen sayilari tamsayi formatinda giriniz ");
			}
			
	}
	
	printf("Sayilarin toplami = %.0f \n", toplam(a,b));
	printf("Sayilarin farki = %.0f \n", fark(a,b));
	printf("Sayilarin carpimi = %.0f \n", carp(a,b));
	printf("Sayilarin bolumu = %.1f", bol(a,b));
	
	return 0;
}
