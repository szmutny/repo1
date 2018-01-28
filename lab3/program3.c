#include <stdio.h>
#include <math.h>

int main()
{
int a,b;
do{
	printf("podaj liczbe a: ");
	scanf("%d",&a);
	printf("podaj liczbe b (b<a): ");
	scanf("%d",&b);
	if(a>b)printf("a jest wieksze niz b, wprowadz ponownie\n");
}while(a>b);
if(a==b)
{
	printf("liczby sa rowne");
	return 0;
}

while(a<b-1)
{
a++;
	printf("%d\n",a);
}

return 0;
}
