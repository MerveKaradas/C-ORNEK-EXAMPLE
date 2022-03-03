#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,toplam=0,aranan;
	
	for( i = 1000 ; i <10000 ; i++ ) //Bütün dört basamaklý sayýlarýn kontrolünü saðlamak için açýlan döngü
	{
		for( j = 1 ; j < i ; j++ ) // i deðerine atýlan sayý deðerinin kendisi hariç 1'den itibaren bölenlerinin kontrolünü saðlamak için açýlan döngü
		{
			if( i%j == 0 ) // Eðer dört basamakli sayýnýn tam böleni ise içeriye girecek
			{
				toplam += j;  // Dört basamakli deðerin kendisi hariç tam bölenleri toplam deðerine atýlýrarak toplanýr
			}
		}
		
		if( i < toplam ) // Eðer sayýnýn kendisi hariç tam bölenleri sayýnýn kendisinden büyükse içeriye girecek
		{
			if( i%2 == 1 ) // Sayýnýn tek olup olmamasý kontrolü. Eðer sayý tek ise içeriye girecek
			{
				aranan = i; // Tüm koþullar saðlandýktan sonra kendisi hariç bölenlerinin toplamý kendisinden büyük olan en büyük dört basamaklý tek sayýyý verir
			}
		}
		toplam=0; // Dört basamaklý her bir sayýnýn tam bölenleri toplamýný bulmak için önceki deðeri sýfýrlýyoruz
	}
	
	printf("Aranilan sayi : %d ",aranan); // Aranan deðeri ekrana bastýrýr
	
	
	
	return 0;
}
