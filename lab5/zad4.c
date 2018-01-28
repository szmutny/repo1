#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ddd(int x)
{ 	
	int y;
	y=floor(log10(abs(x)))+1;
	char str[y];
	sprintf(str,"%d", x);
	while (y>=0)
	{
		printf("%c",str[y]);
		y--;
	}
	return 0;
}

int main ()
{	int x;
	printf("podaj liczbe: "); 
	scanf ("%d",&x);
	ddd (x);
	

return 0;
}
