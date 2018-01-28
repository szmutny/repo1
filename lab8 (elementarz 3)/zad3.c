#include <stdio.h>
#include <math.h>


int main()
{
	int a,b,c;
	for (a=1; a<1000;a++)
	{
		for (b=1; b<999-a;b++)
		{
			for (c=1; c<998-a-b;c++)
			{
				if((a+b>c && a+c>b && b+c>a )&&(pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2)))
				{
				printf("dla a=%d b=%d c=%d\n",a,b,c);
				getchar();
			}
			}
		}
	}

	return 0;
}
