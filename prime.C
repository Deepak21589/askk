#include <stdio.h>

int main(void) {

int a;
printf("enter the num=");
scanf("%d",&a);
if((a%2==0)&&(a%3==0))
{
	printf("\nThe number %dis not prime:",a);
}
else
{
	printf("\nThe number %dis prime:",a);
}
return 0;
}
