#include <stdio.h>
#include <stdlib.h>

/* Her çaðrýldýðýnda içerisinde üretilen rastgele satýr( 1 ile 5 arasýnda) ve sütün (1 ile 10 arasýnda)
deðerlerine göre, ekrana içi * karakterleri ile dolu olan bir diktörtgen çizen dikdortgenciz fonksiyonunu main() fonksiyonunu yazýn */

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
