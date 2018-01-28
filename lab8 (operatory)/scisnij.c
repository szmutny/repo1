
void scisnij(char src[], char dst[]) 
{
  int i, j,k,l=0;
  for(i=j=0; src[i]!='\0'; i++)
{ for (k=0; dst[k]!='\0';k++)
	{
		if (dst[k]==src[i]) l++;
	}
if (l==0)
{ 
	src[j++]=src[i];
	
}

	l=0;
}
  src[j]='\0';

}
