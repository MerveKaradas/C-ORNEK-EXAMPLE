#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isaretbelirle(int sayi)
{
	if( sayi == 0 )
	{
		printf("Sayi isaretsizdir");
		return 0;
	}
	else if( sayi > 0 )
	{
		printf("Sayi isareti pozitiftir");

		return 1;
	}
	else
	{
		printf("Sayi isareti negatiftir");

		return -1;
	}
}


int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Lutfen bir sayi giriniz :  ");
	scanf("%d",&sayi);
	
	isaretbelirle(sayi);
	
	
	return 0;
}
