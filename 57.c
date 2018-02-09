
#include <stdio.h>

int main(void) {
	int f,c,ans;
	printf("enter two numbers");
	scanf("%d%d",&f,&c);
            ans=f*c;
            if(ans%2==0)
            printf("even");
            else
            printf("odd");
	return 0;
}

