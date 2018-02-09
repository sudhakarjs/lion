#include<string.h>
#include<stdio.h>
void main()
{

    char c1[50],c2[50],ch=',';
    printf("enter the string :");
    scanf("%[^\n]s",c1);
    printf("%c %c %c",c1[0],ch,c1[2]);

}
