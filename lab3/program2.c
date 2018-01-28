#include <stdio.h>
#include <math.h>

int main()
{
int linia=1,n,x,d=0;

for(x=0;x<8;x++)
{
	if(linia%2==0)printf(" ");
	linia++;

for(n=0;n<8;n++)
{
	
	printf("*");
	if(d<7)printf(" ");
	d++;
}
d=0;
printf("\n");
}



return 0;
}
