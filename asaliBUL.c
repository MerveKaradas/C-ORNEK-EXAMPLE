#include <stdio.h>
#include <stdlib.h>

/* Kendisine gönderilen 2'den büyük pozitif bir tamsayý ve ikinci parametresindeki karakter deðere ('b' gönderirse büyük, 'k' gönderirse
küçük ) göre kendisine en yakýn küçük ya da büyük asal sayýyý geri döndüren bir fonksiyon yazýnýz.  (9.30)  */

int asaliBUL(float sayi, char karakter )
{
	int i=0;
	
	if( karakter == 'B' || karakter == 'b')
	{
		(int)sayi++;
		for( i=2 ; i<(int)sayi ; i++ )
		{
			if( (int)sayi%i == 0  )
			{
				(int)sayi++;
				continue;
			}
		}
		
		return (int)sayi;
	}
	else
	{
		(int)sayi--;
		for( i=2 ; i<(int)sayi ; i++ )
		{
			if((int)sayi%i == 0  )
			{
				(int)sayi--;
				continue;
			}
		}
		
		return (int)sayi;
	}
}

int main(int argc, char *argv[]) {
	
	float sayi;
	char karakter;
	
	printf("Lutfen 2'den buyuk bir pozitif tamsayi giriniz :  ");
	
	while(1)
	{
		scanf("%f",&sayi);
		if( sayi - (int)sayi == 0 && sayi > 2 )
		{
			break;
		}
		else if( sayi - (int)sayi == 0 && sayi <= 2 )
		{
			printf("Lutfen sayiyi 2'den buyuk olacak bicimde giriniz :  ");
			continue;
		}
		else if( sayi - (int)sayi != 0 && sayi > 2)
		{
			printf("Lutfen sayiyi tamsayi formatinda giriniz :  ");
			continue;
		}
		else
		{
			printf("Lutfen sayiyi tamsayi ve 2'den buyuk olacak sekilde giriniz :   ");
			continue;
		}
	}
	
	printf("Girilen sayidan buyuk mu yoksa kucuk degerde bir tamsayiya dondurulsun ? (B/b/K/k):  ");
	
	while(1)
	{
		scanf("%s",&karakter);
		if( karakter == 'B' || karakter == 'b' || karakter == 'K' || karakter == 'k')
		{
			break;
		}
		else
		{
    		printf("Hatali karakter girisi ! Lutfen tanimlanan karakterlerden giris yapiniz :  ");
		}
	}
	
	printf("%d",asaliBUL(sayi,karakter));
	
	return 0;
}
