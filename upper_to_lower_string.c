#include<stdio.h>
int main(){
	char str[100];
	int i=0;
	scanf("%s",&str);
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;                     // upper to lowercase
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
