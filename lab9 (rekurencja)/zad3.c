#include <stdio.h>
#include <math.h>

char odwr( int n,char *wsk)
{
	if(n==0) return 1;
	return odwr(n-1, (wsk-n));
}

int main ()
{

	int n=0;
	char ch[30];
	do
	{
		scanf("%c",&ch[n]);
		n++;
	} 
	while (ch[n-1]!='\n');
	
	printf ("%c",odwr(n,ch));
	
	
	
	
	
	return 0;
}
