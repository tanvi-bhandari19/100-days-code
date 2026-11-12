#include<stdio.h>
int main()
{
FILE *fp;
char name[50];
int roll,marks;
int n,i;
printf("Enter number of students: ");
scanf("%d",&n);

fp=fopen("students.txt","w");

if(fp==NULL)
{
printf("Error opening file.");
return 1;
}
for(i=0;i<n;i++)
{
printf("Enter name,roll number and marks: ");
scanf("%s %d %d",name,&roll,&marks);
fprintf(fp,"%s %d %d\n",name,roll,marks);
}
fclose(fp);

fp=fopen("students.txt","r");

if(fp==NULL)
{
printf("Error opening file.");
return 1;
}
printf("Student Records:\n");
while(fscanf(fp,"%s %d %d",name,&roll,&marks)!=EOF)
{
printf("Name: %s,Roll No: %d,Marks: %d\n",name,roll,marks);
}
fclose(fp);
return 0;
}
