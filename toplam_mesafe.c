#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Kendisine g�nderilen ilk h�z(ondal�k), f�rlatma a��s�(alfa)(tamsay�) ve havada kalma s�resi
(ondal�k) bilgilerine g�re e�ik at�lan bir cismin ne kadar uza�a d��ece�ini bulup geri d�nd�ren toplamMesafe 
ad�ndaki fonksiyonu,ilk h�z,a�� ve s�renin klavyeden girildi�i ve sonucun ekrana yazd�r�ld��� bir main fonksiyonu ile beraber yaz�n�z */

float toplamMesafe(float hiz,int derece,float sure)
{
	float toplam_mesafe=hiz*cos(derece*M_PI/180)*sure;
	
	printf("Cisim %.2f m uzaga duser",toplam_mesafe);
}

int main(int argc, char *argv[]) {
	
	float hiz,sure;
	int derece;
	
	printf("Ilk hizi giriniz (m/s) :  ");
	scanf("%f",&hiz);
	
	printf("Aciyi giriniz (derece) :  ");
	scanf("%d",&derece);
	
	printf("Havada kalma suresini giriniz (s) :  ");
	scanf("%f",&sure);
	
	printf("------------------------------\n");
	toplamMesafe(hiz,derece,sure);
	
	
	return 0;
}
