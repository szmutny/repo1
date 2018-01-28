#include <stdio.h>
#include <math.h>

int main()
{
	
double tab[6];
int x;
for(x=0;x<6;x++)
{
	printf("podaj %d element tablicy: ",x+1);
	scanf("%lf",&tab[x]);
}
printf("\n");
for(x=0;x<6;x++)
{
	printf("%d element tablicy to: %.2lf\n",x+1,tab[x]);
}
printf("\n");
for(x=5;x>-1;x--)
{
	printf("%d element tablicy to: %.2lf\n",x+1,tab[x]);
}



return 0;
}
