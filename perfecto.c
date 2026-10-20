#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a positive number: ");
scanf("%d",&n);
if(n<=0)
{
printf("Please enter a positive number.\n");
return 0;
}
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==n)
{
printf("%d is a Perfect number.\n",n);
}
else
{
printf("%d is not a Perfect number.\n",n);
}
return 0;
}

