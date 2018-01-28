#include <stdio.h>
#include <math.h>

int funkcja (int x)
{ int i=1,sil=1;
	while (i<=x)
	{
		sil=sil*i;
		i++;
	}
	return sil;
}
int main ()
{	
	int x,sil;
	do
	{
	printf ("podaj liczbe dodatnia: ");
	scanf ("%d",&x);
	if (x<0)printf ("\nliczba mniejsz od zera\n");
	} while (x<0);
	if (x==0)
	{
		printf ("\nsilnia z 0 wynosi 1");
		return 0;
	}
	sil=funkcja (x);
	printf ("\nsilnia z %d wynosi %d",x,sil);
	
return 0;
}

