#include <stdio.h>
#nclude<conio.h>
int main()

{
int a,b,c=1,i;
clrscr();
printf("\nEnter normal value:");
scanf("%d",&a);
printf("\nEnter the upper case value:");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
c=c*b;
}
printf("\nthe power value is:%d",c);
return 0;
	
}
