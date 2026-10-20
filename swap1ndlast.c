#include<stdio.h>
int main()
{
int n,first,last,temp,divisor=1,middle,result;
printf("Enter a number: ");
scanf("%d",&n);

temp=n;
last=n%10;

while(temp>=10)
{
temp=temp/10;
divisor=divisor*10;
}
first=temp;
middle=(n%divisor)/10;
result=last*divisor+middle*10+first;
printf("Number after swapping first and last digit=%d",result);
return 0;
}
