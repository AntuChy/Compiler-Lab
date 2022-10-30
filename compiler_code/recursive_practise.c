#include<stdio.h>
#include<string.h>
#include<ctype.h>
char input[100];
int i;
void main()
{
printf("\nRecursive descent parsing for the following grammar\n");
printf("\nE ->iE'\nE'->+iE'|N\n");
printf("\nEnter the string to be checked:");
gets(input);
if(E())
{
if(input[i+1]=='\0')
printf("\nString is accepted");
else
printf("\nString is not accepted");
}
else
printf("\nString not accepted");
}
E()
{
if(input[i]=='i')
{
i++;
if(EP())
return(1);
else
return(0);
}
}
EP()
{
if(input[i]=='+')
{
i++;
if(input[i]=='i')
{
i++;
if(EP())
return(1);
else
return(0);
}
}
else
return(1);
}

