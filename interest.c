#include<stdio.h>
int main()
{
double p,t;
float r,s,c,a;
printf("Enter value of principle");
scanf("%lf",&p);

printf("Enter value of rate");
scanf("%f",&r);

printf("Enter value of time");
scanf("%lf",&t);
s=(p*r*t)/100;
a=p*(1+(r/100))/t;
c=a-p;
printf("Simple interest is %f\n",s);
printf("compound interest is %f\n",c);
return 0;
}
