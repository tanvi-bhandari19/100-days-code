#include<stdio.h>
int main()
{
double a,b;
int choice;
printf("Enter two number: ");
scanf("%lf %lf",&a,&b);
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Division");
printf("\n Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Result=%.2f\n",a+b);
break;
case 2:
printf("Result=%.2f\n",a-b);
break;
case 3:
printf("Result=%.2f\n",a*b);
break;
case 4:
if(b!=0.0)
{
printf("Result=%.2f\n",a/b);
}
else
{
printf("Division by zero is not allowed .\n");
}
break;
default:
printf("Invalid choice .\n");
}
return 0;
}

