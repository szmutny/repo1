#include <stdio.h>
#include <math.h>

int main()
{
int x,y,z;
int najw=0,sum;
do
{
printf("podaj x: ");
scanf("%d",&x);
printf("podaj y: ");
scanf("%d",&y);
printf("podaj z: ");
scanf("%d",&z);
if (x<=0||y<=0||z<=0) printf("dlugosci nie moga byc ujemne");
}while(x<=0||y<=0||z<=0);
if (najw<x) 
{najw=x;
sum=y+z;
}
if (najw<y) 
{najw=y;
sum=x+z;
}
if (najw<z) 
{najw=z;
sum=y+x;
}
if (sum>najw) printf("z podanych dlugosci mozna stworzyc trojkat");
else printf("z podanych dlugosci nie powstanie trojkat");


		
	
return 0;
}
