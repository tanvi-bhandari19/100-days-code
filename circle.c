#include<stdio.h>
int main()
{
float radius, area, circumference;
{
printf("Enter radius of circle: ");
scanf("%f", &radius);
area=3.14 * radius * radius;
printf("\nArea of the circle = %.2f",area);
circumference=2*3.14*radius;
printf("\nCircumference of the circle= %.2f\n",circumference);
return 0;
}
}
