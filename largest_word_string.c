#include<stdio.h>
int main()
{
	char str[100];
	int i=0,len=0;
	int maxLen=0,start=0,maxStart=0;
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0')
	{
		if(str[i]!=' ' && str[i]!='\n'){
			len++;
		}
		else{
			if(len>maxLen){
				maxLen=len;
				maxStart=start;
			}
			len=0;
			start=i+1;
		}
		i++;
	}
	if(len>maxLen){
		maxLen=len;
		maxStart=start;
	}
	for(i=maxStart;i<maxStart+maxLen;i++){
		printf("%c",str[i]);
	}
	return 0;
}
