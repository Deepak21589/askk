#include <stdio.h>
int main() 
{
    int n,a[10];
    int m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(m>a[i])
        {
            m=a[i];
           printf("%d",m);
        } 
    }
   
	return 0;
}
