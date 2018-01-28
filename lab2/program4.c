#include <stdio.h>
#include <math.h>

int main()
{
double w=0;
int x;
printf("podaj liczbe elementow: ");
scanf("%d",&x);
int tab[x],n=0;

do
{
	tab[n]=n+1;
	w=w+(tab[n]*tab[n]);
	n++;
}while(n<x);
printf("suma kwadratow wynosi: %.0lf",w);

return 0;
}
