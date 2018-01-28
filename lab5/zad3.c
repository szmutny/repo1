#include <stdio.h>
#include <math.h>


int doskonala (int x)
{	
	int i=1, suma=0;
	while (i<x)
	{
		if (x%i==0)
		{
			suma=suma+i;
		}
		i++;
	}
	return suma;
}
int main ()
{	
	int x=1,y;
	while (x<=10000)
	{	
		y=doskonala (x);
		if (x==y) printf("\nliczba %d jest doskonala",x);
		x++;
	}
	
return 0;
}
