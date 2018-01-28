#include <stdio.h>
#include <math.h>
#define MIN 60

int main()
{
	int x,godz,min;
	printf("podaj ilosc minut: ");
	scanf("%d",&x);
	godz=floor(x/MIN);
	min=x%MIN;
	printf ("\n%d min to %d godz i %d min",x,godz,min);
	
	return 0;
}
