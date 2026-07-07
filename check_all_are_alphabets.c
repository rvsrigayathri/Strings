#include<stdio.h>
int main()
{
	char str[100];
	int i=0,flag=1;
	scanf("%s",&str);
	while(str[i]!='\0')
	{
		if(!((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))){
			flag=0;
			break;
		}
		i++;
	}
	if(flag)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
