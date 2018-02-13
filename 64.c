#include<stdio.h>
void main()
{
int c,n,r;
char ch;
printf("enter the string");
scanf("%s",&ch);
for(c=0;c<=10000;c++)
{
n=ch%10;
r=r+n;
n=n/10;
}
}

