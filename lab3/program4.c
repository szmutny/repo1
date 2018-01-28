#include <stdio.h>
#include <math.h>

int main()
{
int n,x=1,suma=0;
do
{
	printf("podaj n: ");
	scanf("%d",&n);
	if(n<1)printf("\nn jest mniejsze od 1");
}while (n<1);
while(x<n)
{
	suma=suma+x;
	printf("\n%d",suma);
	x++;
}



return 0;
}
