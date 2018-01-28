#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void kwadrat(int szer, int dlug)
{ 	
	int i=1,pi=1;
	while(i<=szer)
	{
		printf("*");
		i++;
	}
	i=1;
	while(i<dlug-1)
	{
		printf("\n*");
		while(pi<szer-1)
		{
			printf(" ");
			pi++;
		}
		pi=1;
		printf("*");
		i++;
	}
	printf("\n");
	i=1;
	while(i<=szer)
	{
		printf("*");
		i++;
	}

}
void szczalka (int szer, int dlug)
{
	int k,parz=0,i=0,y,i1=1,d=0,ggg=1;
	if (szer%2==0) parz=1;
	
	do
	{
		if (parz==1)
		{
			y=szer/2-1;
			while (i1<=y-i)
			{
				printf(" ");
				i1++;
			}
			while(d<=i*2)
			{
				if (ggg==1)
				{
					 printf ("**");
					 ggg=0;
				}
				else printf ("*");
				 d++;
			}
		}
		else
		{
			y=szer/2;
			k=y;
			while (i1<=y-i)
			{ 
				printf(" ");
				i1++;
				
			}
			while(d<=i*2)
			{
				if (ggg==1)
				{
					 printf (" *");
					 ggg=0;
					 k--;
				}
				else printf ("*");
				 d++;
				 k--;
			}
		}
		i++;
		d=0;
		i1=0;
		printf ("\n");

	}while (k!=0);
	
	
}

int main ()
{	
	int szer, dlug;
	printf ("podaj szerokosc: ");
	scanf("%d",&szer);
	printf ("podaj dlugosc: ");
	scanf("%d",&dlug);
	
	kwadrat(szer,dlug);
	printf ("\n\n");
	szczalka (szer,dlug);
	

return 0;
}
