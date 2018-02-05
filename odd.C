#include <stdio.h>

int main(void) 
{
	int s,b,i;
	printf("\nEnter  intial number to find odd num :");
	scanf("%d",&s);
	printf("\nEnter final number to find odd num :");
	scanf("%d",&b);
	for(i=s;i<=b;i++)
	{
		if(i%2==1)
	

		printf("%d",i);
	}
	return 0;
}
