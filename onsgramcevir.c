#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 1 ons= 28,3495231 gram

float gronsCevir(float miktar, char o)
{
	return (miktar*28.3495231) ; 
}

float gramCevir(float miktar, char g)
{
	return (miktar*(1/28.3495231)) ; 
}


int main(int argc, char *argv[]) {
	
	float miktar;
	char cins;
	
	printf("Lutfen cevirilecek miktarlari giriniz :  ");
	scanf("%f", &miktar);
	
	printf("Hangi cinsten islem yapmak istersiniz? (o/g):  ");
	scanf("%s",&cins);
	while(1)
	{
		if( (cins == 'o') || ( cins == 'g') )
		{
			break;
		}
		else
		{
			printf("Hatali cins girdiniz. Lutfen belirli cinslerden birini giriniz :  ");
			scanf("%s",&cins);
		}
	}
	
	
	if( cins == 'o' )
	{
		printf("%.3f ons %.7f gramdir",miktar,gronsCevir(miktar,'o'));
	}
	else if( cins == 'g' )
	{
		printf("%.3f gram %.7f onsdur",miktar,gramCevir(miktar,'g'));
	}
	
	return 0;
}
