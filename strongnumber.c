#include<stdio.h>
int main()
{
int n, originalnumber, digit, i;
int factorial,sum=0;

printf("Enter a positive number: ");
scanf("%d", &n);

if(n<=0)
{
printf("Please enter a positive number:.\n");
return 0;
}

originalnumber=n;
while(n!=0)
{
digit=n%10;
factorial=1;
for(i=1;i<=digit;i++)
{
factorial=factorial*i;
n=n/10;
}

if(sum==originalnumber)
{
printf("%d is a Strong NUmber.\n",originalnumber);
}
else
{
printf("%d is not a Strong number.\n",originalnumber);
}
return 0;
}
}

