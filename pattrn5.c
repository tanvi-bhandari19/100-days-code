#include<stdio.h>
int main()
{
int i,j,n;
for(i=1;i<=5;i++)
{
if(i<=3)
n=2*i-1;
else
n=2*(6-i)-1;
for(j=1;j<=n;j++)
{
printf("*\n");
}
printf("\n");
}
return 0;
}
