#include <stdio.h>

int main () 
{
	int *wsk;
	int x,najw,najm,i=0,wyn,y,blok=0;
	
	printf("podaj liczbe elementow tablicy: ");
	scanf("%d",&x);
	int tab[x];
	wsk=tab;

	while(i<x)
	{
		printf("\n\npodaj %d element tablicy: ",i);
		scanf("%d",&y);
		tab[i]=y;
		if(blok==0)
		{
			najw=tab[0];
			najm=tab[0];
			blok=1;
		}
		if (*(wsk+i)>najw) najw=*(wsk+i);
		if (*(wsk+i)<najm) najm=*(wsk+i);
		i++;
	}
	printf("\nnajw: %d",najw);
	printf("\nnajm: %d",najm);
	wyn=najw-najm;
	printf("\nroznica miedzy najwieksza wartoscia a najmniejsza wynosi: %d",wyn);


}
