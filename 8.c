#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("A is greater");
}
}
else if(b>a)
{
if(b>c)
{
printf("b is greater");
}

else if(c>a)
{
printf("c is greater");
}
}
}
