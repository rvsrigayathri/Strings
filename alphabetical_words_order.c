#include<stdio.h>
#include<string.h>
int main()
{ 	char str[100]; 
	char words[20][20],temp[20];
	int i,j,n=0;
	fgets(str,sizeof(str),stdin);
	char *token=strtok(str,"\n");
	while(token!=NULL){
		strcpy(words[n],token);
		n++;
		token=strtok(NULL,"\n");
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(words[i],words[j])>0){
				strcpy(temp,words[i]);
				strcpy(words[i],words[j]);
				strcpy(words[j],temp);
			} 
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%s\n",words[i]);
	}
	return 0;
}

