#include<stdio.h>
int main()
{
long long n;
int count[10]={0};
int digit,i,max=0,ans=0;
printf("Enter the numbers: ");
scanf("%lld",&n);
if(n==0)
{
printf("Most frequent digit: 0");
return 0;
}

while(n>0)
{
digit=n%10;
count[digit]++;
n=n/10;
}
for(i=0;i<10;i++)
{
if(count[i]>max)
{
max=count[i];
ans=i;
}
}
printf("Most frequent digit:%d",ans);
return 0;
}
