#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    int a,c=0;
    printf("enter the string :");
    scanf("%[^n]s",s1);
    for(a=0;s1[a]!='\0';a++){
if(s1[a]==' ')
        {
            c++;
        }

}
 printf("no of words are :%d",c);
}

