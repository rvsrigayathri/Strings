#include<stdio.h>
void swap(char *a, char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char str[],int l,int r){
	int i;
	if(l==r){
		printf("%s\n",str);
		return;
	}
	for(i=1;i<=r;i++){
		swap(&str[l],&str[r]);
		permute(str,l+1,r);
		swap(&str[l],&str[i]);
	}
}
int main(){
	char str[100];
	int len=0;
	scanf("%s",&str);
	while(str[len]!='\0'){
		len++;
	}
	permute(str,0,len-1);
	return 0;
}
