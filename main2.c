#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,toplam=0,aranan;
	
	for( i = 1000 ; i <10000 ; i++ ) //B�t�n d�rt basamakl� say�lar�n kontrol�n� sa�lamak i�in a��lan d�ng�
	{
		for( j = 1 ; j < i ; j++ ) // i de�erine at�lan say� de�erinin kendisi hari� 1'den itibaren b�lenlerinin kontrol�n� sa�lamak i�in a��lan d�ng�
		{
			if( i%j == 0 ) // E�er d�rt basamakli say�n�n tam b�leni ise i�eriye girecek
			{
				toplam += j;  // D�rt basamakli de�erin kendisi hari� tam b�lenleri toplam de�erine at�l�rarak toplan�r
			}
		}
		
		if( i < toplam ) // E�er say�n�n kendisi hari� tam b�lenleri say�n�n kendisinden b�y�kse i�eriye girecek
		{
			if( i%2 == 1 ) // Say�n�n tek olup olmamas� kontrol�. E�er say� tek ise i�eriye girecek
			{
				aranan = i; // T�m ko�ullar sa�land�ktan sonra kendisi hari� b�lenlerinin toplam� kendisinden b�y�k olan en b�y�k d�rt basamakl� tek say�y� verir
			}
		}
		toplam=0; // D�rt basamakl� her bir say�n�n tam b�lenleri toplam�n� bulmak i�in �nceki de�eri s�f�rl�yoruz
	}
	
	printf("Aranilan sayi : %d ",aranan); // Aranan de�eri ekrana bast�r�r
	
	
	
	return 0;
}
