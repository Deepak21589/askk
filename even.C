#include <stdio.h>

int main(void) {
 int l, h, i;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);

    printf("Even numbers between %d and %d are: ", l, h);
    for(i = l; i <= h; i++)
        {
            
        if (i%2 == 0)
        {
        	printf("%d ", i);
        }
           
    }return 0;
}
