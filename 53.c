#include<stdio.h>
int main()
{
	int a,i=0,x=0,a[100],j;
	printf("enter the number ");
	scanf("%d",&a);
	while(a>0)
	{
		x=a%10;
		a=a/10;
		a[i]=x;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	printf("%d ",a[j]);
}
