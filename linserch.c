#include<stdio.h>
int main()
{
int n,a[100],key,i,index=-1;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
index=i;
break;
}
}
if(index!=-1)
printf("Found at index %d",index);
else
printf("-1");
return 0;
}

