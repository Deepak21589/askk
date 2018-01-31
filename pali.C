#include <stdio.h>
#include<string.h>
int main(void) 
{
   char rev;
   int i,num;
  
  printf("\n Enter ur program=");
  scanf("%d",&num);
  rev=num;
  while(rev!=0)
  {
    i=i*10;
    i=i+rev%10;
    rev=rev/10;
  }
  if(num==i)
  {
    printf("\n The num is palindrome");
  }
  else
  {
    printf("\n the num is not palindrome");
  }
	return 0;
}
