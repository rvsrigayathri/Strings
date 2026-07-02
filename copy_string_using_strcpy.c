#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("String2 = %s",str2);
    return 0;
}