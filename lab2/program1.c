#include <stdio.h>
#include <math.h>

int main()
{
double x,y;
printf ("podaj x: ");
scanf ("%lf",&x);
if (x<0)
{
	printf("podana liczba jest mniejsza od 0, nie mozna podac pierwiastka");
}
else
{
y= sqrt(x);
printf("pierwiastek z x to: %lf",y);
}
if(x==0)
{
	printf ("nie mozna odwrócic 0");
	
}
else
{
	x=x*(-1);
	printf ("\nodwrotnosc x to: %lf",x);
}

return 0;
}
