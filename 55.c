#include <stdio.h>
int main(void) {
	int d,digit,sum=0;
	scanf("%d",&d);
	while(d!=0)
	{
		digit=n%10;
		sum+=digit;
		d/=10;
	}
	printf("%d",sum);
	return 0;
}
