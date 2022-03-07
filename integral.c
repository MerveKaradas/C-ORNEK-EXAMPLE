#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 1000


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float integral(float a, float b)
{
	if( a == b)
	{
		return 0;
	}
	else
	{
		float toplam=0,intg=0,h=(b-a)/n;
	    int k;
	    
	
	    for( k=1 ; k <= n-1 ; k++ )
	    {
		toplam += 3*(pow(a +k*h,5)) + 5*(a+k*h);
	    }
	
	    intg = h*( (3*pow(a,5) + 5*a )/2 + (3*pow(b,5) + 5*b )/2 + toplam);
	    return intg;
	}
	
	
}
int main(int argc, char *argv[]) {
	
	float a,b;
	
	printf("f(x) = 3x^5 + 5x fonksiyonun a ve b araligindaki integral degeri icin alt ve ust degerlerini sirasiyla giriniz :  ");
	scanf("%f%f",&a,&b);
	
	printf("f(x) fonksiyonunun %.1f ve %.1f sinirlarindaki integral degeri = %.2f ",a,b,integral(a,b));
	
	return 0;
}
