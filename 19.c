#include<stdio.h>
int main()
{
int n,rem=0,base=1,bin=0;
scanf("%d",&n);
while(n>0)
{
rem=n%2;
bin=bin + rem *base;
base=base*10;
n=n/2;
printf("%d",bin);
}
}
