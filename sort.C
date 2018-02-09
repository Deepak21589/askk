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
           
	return 0;
}
