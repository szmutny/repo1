#include <stdio.h>
#include <math.h>

int main()
{
	double pocz,kon,krok,n,p;
	printf("podaj krok: ");
	scanf("%lf",&krok);
	do
	{
	printf("podaj poczatek: ");
	scanf("%lf",&pocz);
	if (pocz<0) printf("poczatek nie moze byc mniejszy od zera\n");
	
	}while(pocz<0);
	printf("podaj koniec: ");
	scanf("%lf",&kon);
	n=pocz;
	do
	{
		p=sqrt(n);
		printf("\npierwiastek z %.2lf wynosi %.4lf",n,p);
		n=n+krok;
	}
	while(n<=kon);

return 0;
}
