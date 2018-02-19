#include<stdio.h>
#include<conio.h>
void main(void)
{
long int a,b=0,i;
float n;
clrscr();
printf("\nEnter the number range:");
scanf("%ld",&a);
for(i=0;i<a;i++)
{
printf("\nEnter the number:");
scanf("%ld",&b);
b+=b;
}
printf("\nsum:%ld",b);
n=b/a;
printf("\nMedium value:%.2f",n);
getch();
}
