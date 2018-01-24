#include <stdio.h>

int main(void) {int n, i,sum = 0;

    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);

    for(i=1; i <= n; it++)
    {
       sum = sum +i;
    }

    printf("Sum of natural numbers is %d",n, sum);
	return 0;
}
