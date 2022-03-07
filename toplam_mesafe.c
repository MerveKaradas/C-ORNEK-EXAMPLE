#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Kendisine gönderilen ilk hýz(ondalýk), fýrlatma açýsý(alfa)(tamsayý) ve havada kalma süresi
(ondalýk) bilgilerine göre eðik atýlan bir cismin ne kadar uzaða düþeceðini bulup geri döndüren toplamMesafe 
adýndaki fonksiyonu,ilk hýz,açý ve sürenin klavyeden girildiði ve sonucun ekrana yazdýrýldýðý bir main fonksiyonu ile beraber yazýnýz */

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
