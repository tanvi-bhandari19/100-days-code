#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter side of triangle ");
scanf("%d",&a);
printf("Enter second side of triangle ");
scanf("%d",&b);
printf("Enter third side of triangle ");
scanf("%d",&c);
if(a==b & b==c)
printf("Equilateral triangle\n");
else if(a!=b && b!=c && c!=a)
printf("Scalene triangle\n");
else
printf("Isosceles triangle\n");
return 0;
}

