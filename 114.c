#include<stdio.h>
int main()
{
char s[100];
int i,j,k;
int length,maxLength=0;
int repeat;

printf("Enter a string: ");
scanf("%s",s);

for(i=0;s[i]!='\0';i++)
{
length=0;

for(j=i;s[j]!='\0';j++)
{
repeat=0;
for(k=i;k<j;k++)
{
if(s[k]==s[j])
{
repeat=1;
break;
}
}
if(repeat==1)
{
break;
}
length++;
if(length>maxLength)
{
maxLength=length;
}
}
}
printf("Length of longest substring=%d",maxLength);
return 0;
}
