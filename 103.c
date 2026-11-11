#include<stdio.h>
int main()
{
int nums[100];
int n,i;
int totalSum=0,leftSum=0,rightSum=0;
int pivot=-1;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&nums[i]);
totalSum=totalSum+nums[i];
}
for(i=0;i<n;i++)
{
rightSum=totalSum-leftSum-nums[i];
if(leftSum==rightSum)
{
pivot=i;
break;
}
leftSum=rightSum+nums[i];
}
printf("%d",pivot);
return 0;
}
