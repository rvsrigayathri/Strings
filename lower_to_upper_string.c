/*#include<stdio.h>
int main(){
	char str[100];
	int i=0;
	scanf("%s",&str);
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;                     // lower to uppercase
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
*/

/*
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
*/

#include<stdio.h>
int main(){
	char str[100];
	int i=0,upper=0,lower=0;
	scanf("%s",&str);
	while(str[i]!='\0'){
		if(str[i]>='a'&&str[i]<='z'){
			lower++;
		}
		if(str[i]>='A'&&str[i]<='Z'){
			upper++;
		}
		i++;
	}
	printf("%d\n",upper);
	printf("%d",lower);
	return 0;
}


















