#include<stdio.h>

int main()
{
enum Menu
{
ADD=1,
SUBTRACT,
MULTIPLY
};
enum Menu choice;
int option;
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);

printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");

printf("Enter your choice: ");
scanf("%d",&option);

choice=option;
switch(choice)
{
case ADD:
printf("Result=%d",a+b);
break;

case SUBTRACT:
printf("Result=%d",a-b);
break;

case MULTIPLY:
printf("Result=%d",a*b);
break;

default:
printf("Invalid choice");
}
return 0;
}
