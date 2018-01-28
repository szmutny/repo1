#include <stdio.h>
#include <math.h>
#define TYDZ 7

int main()
{
	int x,tyg,dni;
	do
	{
		printf("podaj ilosc dni: ");
		scanf("%d",&x);
		tyg=floor(x/TYDZ);
		dni=x%TYDZ;
		if (x>0) printf ("\n%d dni to %d tygodni i %d dni\n",x,tyg,dni);
	} while (x>0);
	
	return 0;
}

