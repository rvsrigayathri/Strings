#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i=0,j;
	while(scanf("%s",str[i])==1){
		i++;
		if(getchar()=='\n'){
			break;
		}
	}
	for(j=i-1;j>=0;j--){
		printf("%s",str[j]);
	}
	return 0;
}
