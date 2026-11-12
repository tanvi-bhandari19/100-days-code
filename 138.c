#include<stdio.h>

int main()
{
enum Days
{
SUNDAY,
MONDAY,
TUESDAY,
WEDNESDAY,
THURSDAY,
FRIDAY,
SATURDAY
};
char *names[]={
"SUNDAY",
"MONDAY",
"TUESDAY",
"WEDNESDAY",
"THURSDAY",
"FRIDAY",
"SATURDAY",
};
int i;
for(i=SUNDAY;i<=SATURDAY;i++)
{
printf("%s=%d\n",names[i],i);
}
return 0;
}
