#include <stdio.h>
#include <math.h>

int main()
{
int x,a=1,b=0;
for(x=1;x<5;x++)
{
	do
	{
		putchar('*');
		a++;
	}while(a<=x);
	printf("\n");
	a=1;
}

printf("\n");

for(x=4;x>0;x--)
{
	do
	{
		putchar('*');
		a++;
	}while(a<=x);
	printf("\n");
	a=1;
}

printf("\n");

for(x=4;x>0;x--)
{
	a=0;
	while(a<b)
	{
	putchar(' ');
	a++;
	}
	b++;
	a=1;
	do
	{
		putchar('*');
		a++;
	}while (a<=x);
	printf("\n");
}
printf("\n");
b=3;
for(x=1;x<5;x++)
{
	
	a=0;
	while(a<b)
	{
		putchar(' ');
		a++;
	}
	a=1;
	b--;
	do
	{
		putchar('*');
		a++;
	}while(a<=x);
	printf("\n");
	
}


return 0;
}
