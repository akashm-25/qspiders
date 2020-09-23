#include<stdio.h>
int main()
{
int a=2,b=3;
a=a++ + b++ + ++a;
b= b++ + ++b +a++;
printf("%d%d",a,b);
}
