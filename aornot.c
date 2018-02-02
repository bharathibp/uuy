#include <stdio.h>
 
int main()
{
    int n,sum=0, rem=0,t;
 
    printf("Enter an integer number: ");
    scanf("%d", &number);
 
    t=n;
 
    while(t!=0)
    {
        rem=t%10;
        sum=sum + (rem*rem*rem);
        t/=10;
    }  
    if(sum==number)  
        printf("%d yes",n);
    else
        printf("%d no",n);
        return 0;
        }
