#include <stdio.h>

int main(void) {
 int n,rem,result=0,o;
printf("enter the number");
scanf("%d",&n);
rem=o%10;
result+=rem*rem*rem;
o=o/10;
if(result==n)
{
printf("aemstrong");
}
else
{
 printf("not a armstrong");
}
    return 0;
}
