#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,found=0;
    scanf("%s %c",&str,&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Character '%c' is found in '%d' position",ch,i+1);
            found++;
            break;
        }
    }
    if(found==0){
        printf("Character is not found");
    }
    return 0;
}