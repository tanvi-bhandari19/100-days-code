#include<stdio.h>
int main()
{
float l,b,a,p;
printf("Enter length of the rectangle: ");
scanf("%f",&l);
printf("Enter breadth of the rectangle: ");
scanf("%f",&b);
a=l*b;
printf("\nArea=%.2f",a);
p=2*(l+b);
printf("\nPerimeter=%.2f \n",p);
return 0;
}

