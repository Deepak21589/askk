#include <stdio.h>

int main(void) 
{
	int a,d,n,i;
	printf("\nEnter the initial value of the sequence:");
	scanf("%d",&a);

	printf("\nEnter the final value of the sequence:");
	scanf("%d",&d);

	
	n=(a*(a+d))/(2);
	printf("\nvalue is:%d",n);

	return 0;
}
