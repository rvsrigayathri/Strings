#include<stdio.h>
int main()
{
	char str[100];
	int i=0,count=0;
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0'){
		if(str[i]==' ' || str[i]=='\n')
		{
			char ch=str[i-1];
			if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u' || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O' || ch=='U')
				count++;	
		}
		i++;	
	}
	printf("%d",count);
	return 0;
}
