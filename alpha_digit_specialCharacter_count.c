#include<stdio.h>
int main()
{
	char str[100];
	int i=0,alpha=0,digit=0,special=0,n;
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			alpha++;
		}
		else if(str[i]>'0' && str[i]<='100'){
			digit++;
		}
		else if(str[i]!=' ' && str[i]!='\n'){
			special++;
		}
		i++;
	}
	printf("%d\n",alpha);
	printf("%d\n",digit);
	printf("%d",special);
	return 0;
}
