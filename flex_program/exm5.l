/*count the number of identifiers*/
%{
#include<stdio.h>
int count=0;
char ch=0;
%}
digit[0-9]
letter[a-zA-Z]

%%
{letter}({letter}|{digit})* {count++;}
.* {printf("Invalid identifier");}

%%
int main()
{
 yylex();
 printf("number of identifier: %d",count);

}
int yywrap()
{
return 1;
}
