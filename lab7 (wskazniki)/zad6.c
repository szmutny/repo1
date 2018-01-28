#include <stdio.h>

void funkcja(char *wsk)
{
	int i;
	while (*(wsk+i)!='\0')
	{
		if (*(wsk+i)!='\n'&& *(wsk+i)!=' '&& *(wsk+i)!='	')
		{
			printf("%c",*(wsk+i));
		}	
		i++;
	}

}


int main ()
{
	char a[]="   	\n	jakis napis";
	funkcja (a);
	
	return 0;
}
