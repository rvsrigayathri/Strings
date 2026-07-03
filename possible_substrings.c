#include<stdio.h>
int main()
{
	char str[100];
	int i,j,k;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		for(j=1;str[j]!='\0';j++){
			for(k=i;k<=j;k++){
				printf("%c",str[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
