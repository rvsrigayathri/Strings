#include<stdio.h>
int main()
{
	char str[100];
	int i,j,count;
	scanf("%99s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		count =0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count==1){
			printf("%c\n",str[i]);
			return 0;
		}
	}
	printf("Non-repeating character");
	return 0;
}
