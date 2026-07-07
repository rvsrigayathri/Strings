#include<stdio.h>
int main()
{
	char str[100];
	int i=0,len=0,first=-1,flag=1;
	fgets(str,sizeof(str),stdin);
	while(1)
	{
		if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n')
		{
			len++;
		}
		else
		{
			if(first==-1){
				first=len;
			}
			else if(len!=first)
			{
				flag=0;
				break;
			}
			len=0;
			if(str[i]=='\0' || str[i]=='\n'){
				break;
			}
		}
		i++;
	}
	if(flag)
	{
		printf("ALL The Word Are in Same word characrter count");
	}
	else{
		printf("NOT Same");
	}
	return 0;
}
