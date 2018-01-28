#include <stdio.h>
#include <math.h>

double funkcja(double y ,double x)
{double przeciw;
	przeciw=sqrt(pow(x,2)+pow(y,2));
	return przeciw;
}
int main ()
{	
	double x,y,z;
	printf("podaj 1 przyprostakotna: ");
	scanf("%lf",&y);
	printf("\npodaj 2 przyprostakotna: ");
	scanf("%lf",&x);
	z=funkcja(y,x);
	printf("\nprzeciwprostokatna wynosi:");
	printf("%.1lf",z);

return 0;
}
