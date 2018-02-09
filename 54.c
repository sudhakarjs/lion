#include<stdio.h>
void main()
{
int c;
printf("enter the number from 0 to 9");
scanf("%d",&c);
switch(c)
{
case 1:printf("\none");
break;
case 2:printf("\ntwo");
break;
default:printf("enter the number from 0 to 9");
break;
}
}

