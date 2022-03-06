#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float gravitasyon(float m1,float m2,float r)
{
	float F,G;
	
	G=6.673*pow(10,-11);
	F=(G*m1*m2)/(r*r);
	printf("Cekim kuvveti = %.6f Newtondur",F);
	
}


int main(int argc, char *argv[]) {
	
	float m1,m2,r;
	
	printf("Cisimlerin agirliklarini giriniz (kg) :  \n");
	scanf("%f%f",&m1,&m2);
	
	printf("Aralarindaki uzakligi giriniz (m) :  \n");
	scanf("%f",&r);
	
	printf("-------------------------------------\n");
	gravitasyon(m1,m2,r);
	
	return 0;
}
