#include <stdio.h>


int najwieksza(int *wsk, int x)
{
	int najw=*wsk,i=0;
	while (i<x)
	{
		if (*(wsk+i)>najw) najw=*(wsk+i);
		i++;
	}
	return najw;
}

int najmniejsza(int *wsk, int x)
{
	int najm=*wsk,i=0;
	while (i<x)
	{
		if (*(wsk+i)<najm) najm=*(wsk+i);
		i++;
	}
	return najm;
}




int main () 
{
	int *wsk, najw,najm;
	int x,i=0,wyn,y;
	
	printf("podaj liczbe elementow tablicy: ");
	scanf("%d",&x);
	int tab[x];
	wsk=tab;
	
	while(i<x)
	{
		printf("\n\npodaj %d element tablicy: ",i);
		scanf("%d",&y);
		tab[i]=y;
		i++;
	}
	najw=najwieksza(wsk, x);
	najm=najmniejsza(wsk, x);
	printf("\nnajwieksza wartosc wynosi: %d",najw);
	printf("\nnajmniejsza wartosc wynosi: %d",najm);
	wyn= najw-najm;
	printf("\nroznica miedzy najwieksza wartoscia a najmniejsza wynosi: %d",wyn);


}
