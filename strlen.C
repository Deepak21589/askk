#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	int j,co=0;
	printf("enter the sentence:");
	gets(str);

	for(j=0;str[j]!='\0';j++)
	{
		
		if(str[j]==' ')
		{
			co++;
		}
	}
	
	printf("\nthe number of characters in the line are:%d",co);
	return 0;
}
