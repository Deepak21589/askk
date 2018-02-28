#include <stdio.h>
 
int main(void) 
{
	char str[50];
	int i,a,co,ot;
	printf("enter the sentence:");
	scanf("%s",str);
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
printf("Digits = %d\n",co );
     printf("Special characters = %d", ot);

	return 0;
}
