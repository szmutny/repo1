#include <stdio.h>
#include <math.h>

int main()
{
	
double tab[6],max,min;
int x;
for(x=0;x<6;x++)
{
	printf("podaj %d element tablicy: ",x+1);
	scanf("%lf",&tab[x]);
}
printf("\n");
max=tab[0];
for(x=1;x<6;x++)
{
	if(tab[x]>max)max=tab[x];
	
}
printf("najwieksza liczba to: %.2lf",max);
printf("\n");

min=tab[0];
for(x=1;x<6;x++)
{
	if(tab[x]<min)min=tab[x];
}
printf("najmniejsza liczba to: %.2lf",min);

return 0;
}
