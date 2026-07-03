#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],temp[100];
	scanf("%s %s",&str1,&str2);
	strcpy(temp,str1);
	strcat(temp,str1);
	if(strstr(temp,str2)){
		printf("Rotation");
	}	
	else{
		printf("No rotation of the words");
	}
	return 0;
}
