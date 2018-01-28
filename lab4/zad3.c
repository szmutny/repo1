#include <stdio.h>
#include <math.h>
int main() 
{
double n=3,i=0,pi=4;

while(i<10)
{
	pi=pi-4/n;
	n=n+2;
	i++;
	pi=pi+4/n;
	n=n+2;
	i++;
}
printf("\ndla 10 miejsca szeregu pi wynosi: %lf",pi);
while(i<100)
{
	pi=pi-4/n;
	n=n+2;
	i++;
	pi=pi+4/n;
	n=n+2;
	i++;
}
printf("\ndla 100 miejsca szeregu pi wynosi: %lf",pi);
while(i<1000)
{
	pi=pi-4/n;
	n=n+2;
	i++;
	pi=pi+4/n;
	n=n+2;
	i++;
}
printf("\ndla 1000 miejsca szeregu pi wynosi: %lf",pi);
while(i<1000000)
{
	pi=pi-4/n;
	n=n+2;
	i++;
	pi=pi+4/n;
	n=n+2;
	i++;
}
printf("\ndla 1000000 miejsca szeregu pi wynosi: %lf",pi);



	
  return 0;
}
