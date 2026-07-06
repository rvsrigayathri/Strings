#include<stdio.h>
int main()
{
	char str[100];
	int i,j,count;
	char ch='0';
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		count=0;
		for(j=0;str[j]!='\0';j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count==1){
			ch=str[i];
		}
	}
	if(ch=='0'){
		printf("%c",ch);
	}
	else{
		printf("NO NON-REPEATING CHARACTER");
	}
	return 0;
}
