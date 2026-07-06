#include<stdio.h>
int main()
{
	char str[100];
	int i,j=0;
	char result[100];
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' || str[i]>='0' && str[i]<'9')
		{
			result[j]=str[i];
			j++;
		}
	}
	result[j]='\0';
	printf("%s",result);
	return 0;
}
