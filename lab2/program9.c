#include <stdio.h>
#include <math.h>

int main()
{
int x,n=0,max,t,xt;
printf("podaj lczbe elementow tabicy: ");
scanf("%d",&x);
x=x-1;
int tab[x];
int sort[x];
while(n<=x)
{
	printf("podaj %d element tablicy: ",n);
	scanf("%d",&tab[n]);
	n++;
}
n=0;

while(n<=x)
{
	t=n+1;
	
	if (tab[n]>tab[t])
	{ max=tab[n];}
	else max=tab[t];
	printf("%d",max);
	
	n++;
}


xt=x;
tab[xt]=max;
xt--;


return 0;
}
