#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funkcja(int *wsk)
{
	int i=0;
	while (i<512)
	{
		*(wsk+i)=rand()%100;
		i++;
		
	}
}

int main()
{
	int tab[512],t;
	int *wsk;
	wsk = tab;
	funkcja (wsk);
	int i=0;
	while (i<512)
	{
		if (t==10) { printf ("\n"); t=0;}
		if (*(wsk+i)<10) printf(" ");
		printf(" %d",*(wsk+i));
		i++;
		t++;
	}
	
	return 0;
}
