#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],word[20];
	int i=0,j=0,count=0,start,end;
	fgets(str,sizeof(str),stdin);
	while(1)
	{
		if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n'){
			word[j]=str[i];
			j++;
		}
		else
		{
			word[j]='\0';
			if(j>0)
			{
				start=0;
				end=j-1;
				while(start<end)
				{
					if(word[start]!=word[end])
					{
						break;
					}
					start++;
					end--;
				}
				if(start>=end){
					count++;
				}
				j=0;
				if(str[i]=='\0'|| str[i]=='\n')
				{
					break;
				}
			}
		}
		i++;
	}
	printf("%d",count);
	return 0;
}
