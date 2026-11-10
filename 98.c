#include<stdio.h>
int main()
{
char name[100];
int i,lastSpace=0;
printf("Enter full name: ");
fgets(name,sizeof(name),stdin);
for(i=0;name[i]!='\0';i++)
{
if(name[i]==' ')
{
lastSpace=i;
}
}
printf("Name: ");
printf("%c. ",name[0]);
for(i=1;i<lastSpace;i++)
{
if(name[i-1]==' ')
{
printf("%c. ",name[i]);
}
}
for(i=lastSpace+1;name[i]!= '\0' && name[i]!='\n';i++)
{
printf("%c",name[i]);
}
return 0;
}
