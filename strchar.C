#include <stdio.h>
#define MAX_SIZE 100
int main(void) 
{
    char str[MAX_SIZE];
    int a,co,ot,i;
    a = co = ot = i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            a++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            co++;
        }
        else
        {
            ot++;
        }

        i++;
    }
    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", co);
    printf("Special characters = %d", ot);
   return 0;
}
	
