/*Lex Program to recognize keywords, number,identifier,operator*/
%{
#include<stdio.h>
%}
delim [ \t\n]
ws {delim}+
digit [0-9]
letter [A-Za-z]
id {letter}({letter}|{digit})*
number {digit}+(\.{digit}+)?(E[+\-]?{digit}+)?

%%
int |
float |
char |
for |
double |
switch |
if |
else |
then |
while |
do {printf("%s is a keyword\n",yytext);}
"<=" {printf("%s is a Less Than Equal to\n",yytext);}
">=" {printf("%s is a Grater Than Equal to\n",yytext);}
"<"  {printf("%s is a Less Than\n",yytext);}
">"  {printf("%s is a Grater Than\n",yytext);}
"==" {printf("%s is a Equal to\n",yytext);}
"!=" {printf("%s is a Not Equal to\n",yytext);}
{id} {printf("%s is a identifier\n",yytext);}
{number} {printf("%s is a number\n",yytext);}
{ws} {}
.|\n {ECHO;}
%%
int main()
{
printf("\n Enter the String: ");
yylex();
}
int yywrap()
{
return 1;
}
