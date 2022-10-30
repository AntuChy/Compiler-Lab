/*count line,word,charc*/
%{
#include <stdio.h>
int ch = 0, wd = 0, nl = 0;
%}
delim [ \t]+
%%

\n { ch++; wd++; nl++; }
^{delim} { ch+=yyleng; }
{delim} { ch+=yyleng; wd++; }
. { ch++; }
%%
int main()

{
yylex();
printf("line=%4d word=%4d character=%4d\n", nl, wd,ch);
}
int yywrap()
{
return 1;
}
