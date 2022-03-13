#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mukemmel_mi(float tamsayi)
{
	int i,bolen=0;
	
	for( i=1 ; i<tamsayi ; i++  )
	{
		if( (int)tamsayi%i==0)
		{
			bolen += i;
		}
	}
	if( bolen==tamsayi)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main(int argc, char *argv[]) {
	
	float tamsayi;
	
	printf("Bir pozitif tamsayi giriniz :  ");
	while(1)
	{
		scanf("%f",&tamsayi);
		if( tamsayi - (int)tamsayi == 0 && tamsayi > 0)
		{
			break;
		}
		else
		{
			printf("Lutfen sayiyi tamsayi ve pozitif olacak formatta yeniden giriniz :  ");
		}
	}
	
	if( mukemmel_mi(tamsayi) ==1 )
	{
		printf("Bu sayi mukemmeldir");
	}
	else
	{
		printf("Bu sayi mukemmel degildir");
	}
	
	return 0;
}
