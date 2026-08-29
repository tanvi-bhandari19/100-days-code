#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first number");
scanf("%d",&a);

printf("Enter the second number");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapped a=%d \n",a);
printf("Swapped b=%d \n",b);
return 0;
}

