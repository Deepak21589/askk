#include<stdio.h>
int main()
{
    int n,m,i,hcf;
    printf("\nenter the array length");
    scanf("%d",&n);
    printf("\n enter the array elements");
    scanf("%d",&m);
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
        hcf=i;
        
        }
       
    }
    
     printf("%d %d",hcf);
        return 0;
}
