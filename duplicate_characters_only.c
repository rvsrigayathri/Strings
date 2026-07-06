#include<stdio.h>
int main()
{
	char str[100];
	int i,j,count;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		count=0;
		for(j=0;str[j]!='\0';j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count>1){
			int printed=0;
			for(j=0;j<i;j++){
				if(str[i]==str[j]){
					printed=1;
					break;
				}
			}
			if(!printed){
				printf("%c\n",str[i]);
			}
		}
	}
	return 0;
}
