#include<stdio.h>
int main()
{
int a[100],n,i;
int even =0; 
int odd=0;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("Even = %d, Odd=%d",even,odd);
return 0;
}
