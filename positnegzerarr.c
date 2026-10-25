#include<stdio.h>
int main()
{
int a[100],n,i;
int positive=0;int negative=0; int zero=0;

printf("Enter the number of elements: ");
scanf("%d",&n);

printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
{
positive++;
}
else if(a[i]<0)
{
negative++;
}
else
{
zero++;
}
}
printf("Positive=%d,Negative=%d,Zero=%d", positive, negative, zero);
return 0;
}
