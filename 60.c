#include<stdio.h>
#include<string.h>
void main()
{
    int c,s,k;
    printf("Enter the two numbers");
    scanf("%d%d",&c,&s);
    printf("\nBefore swapping the numbers are %d   %d",c,s);
    k=c;
    c=s;
    s=k;
    printf("\nAfter swapping the numbers are %d   %d",c,s);
}
