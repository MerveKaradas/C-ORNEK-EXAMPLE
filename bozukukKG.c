#include <stdio.h>
#include <stdlib.h>

/* Kendisine gönderilen para deðerinin, en az metal bozuklukla ödendiðinde kaç kilo ettiðini geriye döndüren cevirKG adýndaki fonksiyonu, 
para miktarýnýn klavyeden girildiði ve sonucun ekrana yazdýrýldýðý bir main fonksiyonu ile beraber yazýnýz
NOT : PARA DEÐERLERÝ YALNIZCA 1TL, 50 KURUÞ, 25 KURUÞ VE 10 KURUÞLUKLAR KULLANILACAK VE BU BOZUKLUKLARIN AÐIRLIKLARI SIRASIYLA 8,2 GR , 6,8 GR , 4GR VE 3,15GR KADARDIR. */

void cevirKG(float para)
{
	int nBIRTL = para/1.00;
	float nELLIKR = (para - nBIRTL*1.00)/0.50;
	float nYRBESKR = (para - nBIRTL*1.00-nELLIKR*0.50)/0.25;
	float nONKR = (para - nBIRTL*1.00-nELLIKR*0.50-nYRBESKR*0.25)/0.10;
	
	float toplamKG= nBIRTL*8.2/1000 + nELLIKR*6.8/1000 + nYRBESKR*4.0/1000 + nONKR*3.15/1000;
	printf("Bozukluklarin toplam kg ederi = %.5f KG",toplamKG);
}

int main(int argc, char *argv[]) {
	
	float para;
	
	printf("Para miktariniz nedir? (TL) :  ");
	scanf("%f",&para);
	
	printf("----------------------------------------\n");
	cevirKG(para);
	
	return 0;
}
