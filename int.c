#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter the integer:");
scanf("%11d",&n);
while(n!=0)
{
n=n/10;
n/=10;
++count;
}
printf("number of digit:%d",count);
}
