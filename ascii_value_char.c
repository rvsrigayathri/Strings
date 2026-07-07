#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0' && str[i]!='\n')
	{
		printf(" %d\n",str[i],str[i]);
		i++;
	}
	return 0;
}
