#include <stdio.h>
#include <math.h>

int main()
{
int poz=0,pion=0,w;
printf(" /  | 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |\n-------------------------------------------------------\n");
while(poz<10)
{
printf (" %d  |",poz);
while(pion<10)
{
	w=poz*pion;
	if (w>9)printf(" %d ",w);
	else printf(" %d  ",w);
	printf("|");
	pion++;
	
}

printf("\n-------------------------------------------------------\n");
poz++;
pion=0;

}
return 0;
}
