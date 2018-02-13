#include<stdio.h>
void main() {
    int p1=0,p2=1,f,n,i;
    scanf("%d",&n);
    printf("%d\t%d\t",p1,p2);
    for(i=2;i<n;i++)
{     p=p1+p2;
       p1=p2;
       p2=p;
       printf("%d\t",p);
}
    
}
