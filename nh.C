#include <stdio.h>
 #include<string.h>
int main(void) 
{
	char str[50];
	int j=0,co=0,l=1;
	printf("enter the sentence:");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	{
		co=co+1;
	}
	printf("The number of characters in the string are %d\n", co);
	for(j=0;j <=co-1;j++)
	{
		if(str[j]==' ')
		{
		l=l+1;
		}
	}
	printf("\nthe number of characters in the line are:%d",l);
	return 0;
}
