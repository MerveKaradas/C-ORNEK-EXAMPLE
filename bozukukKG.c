#include <stdio.h>
#include <stdlib.h>

/* Kendisine g�nderilen para de�erinin, en az metal bozuklukla �dendi�inde ka� kilo etti�ini geriye d�nd�ren cevirKG ad�ndaki fonksiyonu, 
para miktar�n�n klavyeden girildi�i ve sonucun ekrana yazd�r�ld��� bir main fonksiyonu ile beraber yaz�n�z
NOT : PARA DE�ERLER� YALNIZCA 1TL, 50 KURU�, 25 KURU� VE 10 KURU�LUKLAR KULLANILACAK VE BU BOZUKLUKLARIN A�IRLIKLARI SIRASIYLA 8,2 GR , 6,8 GR , 4GR VE 3,15GR KADARDIR. */

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
