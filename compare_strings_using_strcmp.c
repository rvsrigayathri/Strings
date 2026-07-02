#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    if(strcmp(str1,str2)==0){
        printf("Both the strings are equal");
    }
    else{
        printf("Both the strings are not equal");
    }
    return 0;
}