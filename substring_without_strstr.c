#include<stdio.h>
int main()
{
	char str[100],sub[100];
	int i,j,found;
	scanf("%s %s",&str,&sub);
	for(i=0;str[i]!='\0';i++)
	{
		found=1;
		for(j=0;sub[i]!='\0';j++)
		{
			if(str[i+j]!=sub[j])
			{
				found=0;
				break;
			}
		}
		if(found)
		{
			printf("Substring Found");
			return 0;
		}
	}
	printf("Substring is not Found");
	return 0;
}
/*
#include<stdio.h>
int main()
{
	char str[100],sub[100];
	int i,j,found;
	fgets(str,sizeof(str),stdin);
	fgets(sub,sizeof(sub),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		found=1;
		for(j=0;sub[i]!='\0';j++)
		{
			if(str[i+j]!=sub[j])
			{
				found=0;
				break;
			}
		}
		if(found)
		{
			printf("Substring Found");
			return 0;
		}
	}
	printf("Substring is not Found");
	return 0;
}
*/
