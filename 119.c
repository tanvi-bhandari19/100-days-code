#include<stdio.h>
int main()
{
int nums[100];
int freq[100]={0};
int n,i;

printf("Enter size of array: ");
scanf("%d",&n);

printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&nums[i]);
}
for(i=0;i<n;i++)
{
if(freq[nums[i]]==1)
{
printf("Repeated element=%d",nums[i]);
return 0;
}
freq[nums[i]]++;
}
return 0;
}
