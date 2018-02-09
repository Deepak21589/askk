#include <stdio.h>

int main(void) {
           int a[100],b,i,j,temp;
         
         
           scanf("%d",&b);
           for(i=0;i<b;i++)
          
          
           scanf("%d",&a[i]);
           for(i=0;i<b;i++)
           {
           	for(j=i+1;j<b;j++)
           	{
           		if(a[j]<a[i])
           		{
           	               temp=a[j];
           	               a[j]=a[i];
           	               a[i]=temp;
           		}
           	}
           
           }
           for(i=0;i<b;i++)
           printf("%d ",a[i]);
       if(b%2==0)
     {
         printf("%d\n",(a[b/2]+a[(b/2)-1])/2);
     }
     else
     {
         printf("%d\n",a[(b-1)/2]);
     }
           
	return 0;
}
