#include <stdio.h>
#include <math.h>

int main()
{
	int x,y,s=0;
printf ("podaj pierwsza liczbe: ");
scanf ("%d",&x);
printf ("podaj druga liczbe: ");
scanf ("%d",&y);

while(x!=0)
{
if(x%2==1) s=s+y;
x=x/2;
y=y*2;

}
printf("wynik wynosi: %d",s);

return 0;
}
