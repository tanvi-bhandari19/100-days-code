#include<stdio.h>
int main()
{
int number, original, digit;
int reverse=0;

printf("Enter a positive integer: ");
scanf("%d", &number);

original=number;

while(number>0)
{
digit=number%10;
reverse=reverse*10+digit;
number/=10;
}
if(original==reverse)
{
printf("Palindrome number\n");
}
else
{
printf("Not a palindrome number\n");
}
return 0;
}
