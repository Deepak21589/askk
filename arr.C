#include<stdio.h>
{
long int arr[50];
int i,n,a;
printf("enter size of  array:");
scanf("%d",&n);
//printf("enter %d elements in the array:" ,n);
//scanf("%d",&a);
for(i=0;i<n;i++)
{
for(i=0;i<n;i++)
{
scanf("%ld",arr[i]);
printf("\n elements in array are:%ld",arr[i]);
}
printf("%ld",arr[i]);
}

return 0;
}
