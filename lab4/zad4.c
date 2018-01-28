#include <stdio.h>	
int main() {
	int nb,nt,nl,c;
   /** deklaracje zmiennych lokalnych */
   nb = 0;  /* liczba znaków odstępu */
   nt = 0;  /* liczba znaków tabulacji */
   nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
	  switch (c)
	  {
	   case 32:
	   nb++;
	   break;
	   case 9:
	   nt++;
	   break;
	   case 10:
	   nl++;
	   break;
	   default:
	   break;
	   
	   
   }
      /** zliczaj białe znaki */
   }
   printf("/nliczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb,nt,nl );
   return 0;
}
