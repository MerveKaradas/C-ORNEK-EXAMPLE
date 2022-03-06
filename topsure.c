#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Kendisine gönderilen ilk hýz(ondalýk) ve fýrlatma açýsý (alfa)(tamsayý) bilgilerine
göre eðik atýlan bir cisim ne kadar süre sonunda yere düþeceðini bulan toplamSure adýndaki 
fonksiyonu,ilk hýz ve açýnýn klavyeden girildiði ve sonucun ekrana yazdýrýldýðý bir main fonksiyonu ile
beraber yazýnýz. */

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
