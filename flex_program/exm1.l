/*number*/
%{
#include<stdio.h>
%}

%%
[0-9]+ {printf("%s\n",yytext);}
.|\n {}
%%
int main()
{
yylex();
}
int yywrap()
{
return 1;
}