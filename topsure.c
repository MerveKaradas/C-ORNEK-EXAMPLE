#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Kendisine g�nderilen ilk h�z(ondal�k) ve f�rlatma a��s� (alfa)(tamsay�) bilgilerine
g�re e�ik at�lan bir cisim ne kadar s�re sonunda yere d��ece�ini bulan toplamSure ad�ndaki 
fonksiyonu,ilk h�z ve a��n�n klavyeden girildi�i ve sonucun ekrana yazd�r�ld��� bir main fonksiyonu ile
beraber yaz�n�z. */

float toplamSure(float hiz, int aci)
{
	float radyan = aci*M_PI/180;
	float result = sin(radyan);
	float toplamsure = 2*( hiz*result/9.80 );
	printf("Cisim %.3f saniye sonra yere duser ",toplamsure);

}

int main(int argc, char *argv[]) {
	
	float hiz;
	int aci;
	
	printf("Ilk hizi giriniz (m/s) :  ");
	scanf("%f",&hiz);
	
	printf("Aciyi giriniz (derece) :  ");
	scanf("%d",&aci);
	printf("----------------------------\n");
	
	toplamSure(hiz,aci);
	
	
	return 0;
}
