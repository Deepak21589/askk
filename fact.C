#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int a,b=1,i;
  clrscr();

	printf("\nEnter the value fr factorial:");
	scanf("%d",&a);
for(i=1;i<=a;i++)
{
	b=b*i;

}
printf("\nfactorial value:%d",b);

	return 0;
}
