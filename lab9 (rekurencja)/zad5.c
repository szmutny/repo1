#include <stdio.h>
#include <math.h>

int bin (int n)
{
	
	return bin(pow(2,n-1));
}

int main ()
{
	int n;
	printf("podaj n: ");
	scanf("%d",&n);
	printf("%d",bin (n));
	
	
	return 0;
}
