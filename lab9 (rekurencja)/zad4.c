#include <stdio.h>

int NWD(int a, int b)
{
	if (a==0 || b==0) return 1;
	if (a<b) return NWD(a,b-a);
	if (a>b) return NWD(a-b,a);
	
}

int main ()
{
	int a,b;
	printf ("podaj a: ");
	scanf ("%d",&a);
	printf ("podaj b: ");
	scanf ("%d",&b);
	printf("%d",(NWD(a,b)))
	;
	
	return 0;
}
