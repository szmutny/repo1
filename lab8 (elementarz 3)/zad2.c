#include <stdio.h>
#include <math.h>

int main()
{
	double x=1,y;
	while (x<=20)
	{
		y=sqrt(x);
		if(x<10) printf("pierwiastek z %.0lf  wynosi %lf\n",x,y);
		else printf("pierwiastek z %.0lf wynosi %lf\n",x,y);
		x++;
	}
	return 0;
}
