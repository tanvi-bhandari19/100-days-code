#include<stdio.h>
int main()
{
FILE *fp;
char filename[100];
char text[200];

printf("Enter filename: ");
scanf("%s",filename);

fp=fopen(filename,"a");

if(fp==NULL)
{
printf("File could not be opened. ");
return 1;
}
getchar();

printf("Enter a new line of text: ");
fgets(text,sizeof(text),stdin);

fprintf(fp,"%s",text);
fclose(fp);
printf("Text appended successfully. ");
return 0;
}
