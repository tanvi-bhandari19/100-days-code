#include<stdio.h>
int main()
{
enum Role
{
ADMIN=1,
USER,
GUEST
};
enum Role role;
int choice;

printf("1. Admin\n");
printf("2. User\n");
printf("3.Guest\n");

printf("Enter your role: ");
scanf("%d",&choice);
role=choice;

switch(role)
{
case ADMIN:
printf("Welcome Admin");
break;

case USER:
printf("Welcome User");
break;

case GUEST:
printf("Invalid role");
}
return 0;
}
