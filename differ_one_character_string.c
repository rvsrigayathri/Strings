#include<stdio.h>
int main(){
	char str1[100],str2[100];
	int i=0,diff=0;
	scanf("%s %s",&str1,&str2);
	while(str1[i]!='\0' && str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			diff++;
		}
		i++;
	}
	while(str1[i]!='\0'){
		diff++;
		i++;
	}
	if(diff==1){
		printf("Both the words are differ by exactly one character");
	}
	else{
		printf("Both the words are not differ by exactly one character");
	}
	return 0;
}
