#include <stdio.h>
#include <math.h>
int main() 
{
int n,i,l=0;

	printf("Podaj liczbe do sprawdzenia: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	if(n%i==0)
	{			
		if(n!=i && i!=1)
		{
			l=1;
		}
	}
	i++;
}
	if(l==0) printf("\nLiczba %d,jest pierwsza.",n);
	else printf("\nLiczba %d, nie jest pierwsza.",n);
	
	
  return 0;
}
