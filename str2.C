#include <stdio.h>

int main(void)
{
	char str[50];
	int j,co=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(j=0;str[j]!='\0';j++)
	{
		co=co+1;
	}
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==' ')
		{
			co=co-1;
		}
	}
	printf("\nthe number of characters in the line are:%d",co);
	return 0;
}
