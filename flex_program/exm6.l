/*count numbers of lines, words and characters*/
%{
#include<stdio.h>
int nlines,nwords,nchars;
%}

%%
\n {nchars++;nlines++;}

[^ \n\t]+ {nwords++, nchars=nchars+yyleng;}
. {nchars++;}
%%
int main()
{
 yylex();
 printf("Lines = %d\nChars=%d\nWords=%d",nlines,nchars,nwords);

}
int yywrap()
{
 return 1;
}
