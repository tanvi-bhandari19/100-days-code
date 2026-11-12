#include<stdio.h>
int main()
{
FILE *fp;
char ch;
int vowels=0,consonants=0;

fp=fopen("input.txt","r");
if(fp==NULL)
{
printf("Error:File does not exist!");
return 1;
}
while((ch=fgetc(fp))!=EOF)
{
if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
vowels++;
}
else if((ch>='a' && ch<='z') || (ch>='A' && ch<= 'Z'))
{
consonants++;
}
}
fclose(fp);

printf("Vowels=%d\n",vowels);
printf("Consonants= %d",consonants);

return 0;
}
