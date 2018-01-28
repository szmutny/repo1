#include <stdio.h>
#include <math.h>

int main ()
{
	int x,y,suma=0,i;
	printf ("podaj x: ");
	scanf("%d",&x);
	printf ("podaj y: ");
	scanf("%d",&y);
	if(x>y)
	{
		i=y;
		while (i<=x)
		{
			suma=suma+pow(i,2);
			i++;
		}

	}
	else if (x<y);
	{
		i=x;
		while (i<=y)
		{
			suma=suma+pow(i,2);
			i++;
		}

	}
	if (x==y)
	{
		printf ("liczby sa rowne, suma wynosi 0");
		return 0;
	}
	
	
	printf("Suma kolejnych liczb całkowitych od %d do %d wynosi %d.",x,y,suma);
	
	return 0;
}
