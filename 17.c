#include<stdio.h>
int main()
{
int n=123,rem,x=0,i;
while(n>0)
{
rem=n%10;
for(i=rem-1;i>0;i--)
{
rem=rem*i;
}
printf("%d",rem);
n=n/10;
}
}
