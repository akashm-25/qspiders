#include<stdio.h>
int main()
{
int n,a=0,i,b=1,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=a+b;
b=sum;


printf("%d\n",sum);
}
}

