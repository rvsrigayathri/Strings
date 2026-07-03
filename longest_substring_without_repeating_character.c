#include<stdio.h>
int main()
{
	char str[100];
	int i,j,start=0,maxStart=0,maxLen=0;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		for(j=start;j<i;j++){
			if(str[i]==str[j]){
				start=j+1;
				break;
			}
		}
		if(i-start+1>maxLen){
			maxLen=i-start+1;
			maxStart=start;
		}
	}
	for(i=maxStart;i<maxStart+maxLen;i++){
		printf("%c",str[i]);
	}
	printf("\n Length = %d",maxLen);
	return 0;
}
