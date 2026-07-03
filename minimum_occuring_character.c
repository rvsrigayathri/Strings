#include<stdio.h>
int main(){
	char str[100],ch;
	int freq[256]={0}, i,min=1000;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		freq[(unsigned char)str[i]]++;
	}
	for(i=0;i<256;i++){
		if(freq[i]>0 && freq[i]<min){
			min=freq[i];
			ch=i;
		}
	}
	printf("%c",ch);
	return 0;
}
