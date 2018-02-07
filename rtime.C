#include<stdio.h>

int main()
{
int mins,hrs,rmin;
printf("enter the minutes");
scanf("%d",&mins);
hrs=mins/60;
rmin=mins%60;
printf("%d %d",hrs,rmin);
return 0;
}

