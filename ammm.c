#include<stdio.h>
void main()
{
int number,temp,sum=0,rem=o;
printf("%denter the number");
scanf("%d",number);
while(temp!=0)
{
temp=number/10;
rem=temp/=0;
sum=sum+(rem*rem*rem);}
if(sum==number)
{
printf("%dyes",number);
else
prinf("no%d",number);
}
return 0;}
