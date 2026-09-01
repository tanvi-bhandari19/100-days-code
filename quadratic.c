#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c, disc, rt1,rt2, realpart,imgpart;
printf("Enter coefficients a,b,c: ");
scanf("%f %f %f" , &a, &b, &c);
disc=b*b-4*a*c;
if(disc>0)
{
rt1=(-b+sqrt(disc))/(2*a);
rt2=(-b-sqrt(disc))/(2*a);
printf("Roots are real and distinct.\n");
printf("Root 1 = %.2f, Root 2 = %.2f\n", rt1,rt2);
}
else if(disc==0)
{
rt1= -b/(2*a);
printf("Roots are real and equal.\n");
printf("Root 1 = Root 2= %.2f\n", rt1);
}
else
{
realpart=-b/(2*a);
imgpart=sqrt(-disc)/(2*a);
printf("Roots are complex and imaginary.\n");
printf("Root1 = %.2f+%.2fi\n", realpart,imgpart);
printf("Root2=%.2f-%.2fi\n",realpart,imgpart);
}
return 0;
}

