#include <stdio.h>
#include <stdlib.h>

/* Her �a�r�ld���nda i�erisinde �retilen rastgele sat�r( 1 ile 5 aras�nda) ve s�t�n (1 ile 10 aras�nda)
de�erlerine g�re, ekrana i�i * karakterleri ile dolu olan bir dikt�rtgen �izen dikdortgenciz fonksiyonunu main() fonksiyonunu yaz�n */

void dikdortgenciz()
{
	srand(time(NULL));
	int satir = 1 + rand()%5;
	int sutun = 1 + rand()%10;
	
	int i,j;
	
	for( i=1 ; i<=satir ; i++ )
	{
		for( j=1 ; j<=sutun ; j++ )
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	
	dikdortgenciz();
	
	return 0;
}
