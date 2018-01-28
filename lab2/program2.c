#include <stdio.h>
#include <math.h>

int main()
{
double x,y,z, suma, iloczyn, najw, najm;
printf("podaj x: ");
scanf("%lf",&x);
printf("podaj y: ");
scanf("%lf",&y);
printf("podaj z: ");
scanf("%lf",&z);

suma=x+y+z;
printf("\nsuma liczb wynosi: %lf",suma);
iloczyn=x*y*z;
printf("\niloczyn liczb wynosi: %lf",iloczyn);
najw=x;
if (x<y) najw=y;
if (y<z) najw=z;
najm=x;
if (x>y) najm=y;
if (y>z) najm=z;
printf("\nnajwieksza liczba wynosi: %lf",najw);
printf("\nnajmniejsza liczba wynosi: %lf",najm);



return 0;
}
