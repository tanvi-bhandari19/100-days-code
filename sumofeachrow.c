#include<stdio.h>
int main(void)
{
int a[3][3]=
{
{1,2,3},
{4,5,6},
{7,8,9}
};

int i,j;
int sum[3];
for(i=0;i<3;i++)
{
sum[i]=0;
for(j=0;j<3;j++)
{
sum[i]=sum[i]+a[i][j];
}
}
for(i=0;i<3;i++)
{
printf("Sum of row %d = %d\n",i+1,sum[i]);
}
return 0;
}
