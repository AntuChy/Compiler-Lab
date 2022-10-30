
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char input[100];
int i;
void main()
{
printf("\nRecursive descent parsing for the following grammar\n");
printf("\nE->num T\nT->* num T|N\n");

printf("\nEnter the string to be checked:");
gets(input);
if(E())
{
if(input[i+1]=='\0')
printf("String is accepted\n");
else
printf("String is not accepted\n");
}
else
printf("String not accepted\n");
}

E()
{
if(input[i]>=48 && input[i]<=57)
{
i++;
    if(T())
    return(1);
    else
    return(0);
}
}
T()
{
if(input[i]=='*')
{
i++;
if(input[i]>=48 && input[i]<=57)
{
i++;
    if(T())
    return(1);
    else
    return(0);
}
}
else
return(1);
}
