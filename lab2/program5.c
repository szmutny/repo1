#include <stdio.h>
#include <math.h>

int main()
{
	int liczba=0,t;
	int tab [100],dziel=1,td;
	int suma=0;
do
{
	suma=0;
	dziel=1;
	t=0;
	
	do
	{
		if(liczba%dziel==0) 
		{suma=suma+dziel;

		}
		dziel++;
		
	}while(dziel<=liczba);
	
	

	
	
	
	if ((liczba)*2==suma)
	{
	printf("liczba %d jest liczba idealna",liczba);
	getchar();
	}
	liczba++;
	
}while (1<2);

	
		
	
return 0;
}
