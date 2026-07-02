#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int count[26]={0},i=0;
	scanf("%s %s",&str1,&str2);
	while(str1[i]!='\0'){
		count[str1[i]-'a']++;
		i++;
	}
	i=0;
	while(str2[i]!='\0'){
		count[str2[i]-'a']--;
		i++;
	}
	for(i=0;i<26;i++){
		if(count[i]!=0){
			printf("Not an Anagram");
			return 0;
		}
	}
	printf("Anagram");
	return 0;
}
