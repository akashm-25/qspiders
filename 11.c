#include<stdio.h>
int p =1234;
int c=1234;
int bal=1000;
int main()
{
int user;
int pin;
int ch,dep,wd;
printf("Enter the userid");
scanf("%d",&user);
if(user==c)
{
printf("Enter the pin");
scanf("%d",&pin);
{ 
if(pin == p)
{
printf("Enter \n 1-> to check balance \n 2-> to deposit \n 3-> to withdraw");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Your balance is %d\n",bal);
	break;
case 2:printf("Enter the ammount to be deposited\n");
	scanf("%d",&dep);
	printf("Successfully deposited\n");
	bal=bal+dep;
	printf("your balance is %d\n",bal);
	break;
case 3:printf("Enter the amount to withdraw\n");
	scanf("%d",&wd);
	if(wd<=bal)
	{
	printf("Amount withdrawed\n");
	bal=bal-wd;
	printf("available balance is %d\n",bal);
	}
	else
	printf("Insufficient balance");
	break;
default: printf("Invalid Input");
}
}
else
printf("Invalid Pin");
}
}
else
printf("invalid userid");
}
