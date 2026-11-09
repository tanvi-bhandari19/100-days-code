#include<stdio.h>
int main()
{
int n,i,k;
printf("Enter size of array: ");
scanf("%d", &n);
int a[n];
printf("Enter array elementss: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number of positions to rotate: ");
scanf("%d",&k);
k=k%n;
printf("Array after right rotation: ");
for(i=n-k;i<n;i++)

{
printf("%d",a[i]);
}
for(i=0;i<n-k;i++)
{
printf("%d ",a[i]);
}
return 0;
}
