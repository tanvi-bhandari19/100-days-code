#include<stdio.h>
int main()
{
int nums[100];
int n,i;
int actualSum=0,expectedSum,missing;
{
printf("Enter size of array: ");
scanf("%d",&n);

printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&nums[i]);
actualSum=actualSum+nums[i];
}
expectedSum+nums[i];
}
expectedSum=n*(n+1)/2;
missing = expectedSum-actualSum;
printf("Missing number = %d",missing);
return 0;
}
