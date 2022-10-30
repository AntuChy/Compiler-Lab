/*Lex specifications to count no. of words, lines and characters of given input file.*/
%{include<stdio.h>
int lines=0,words=0,c_letters=0,num=0,s_characters=0,total=0;
%}

%%
\n {lines++;words++;}
[\t ' '] words++;
[a-zA-Z] c_letters++;
[0-9] num++;
.s_characters++:
%%

int main()
{
yyin=fopen("sample.txt","r");
yylex();
total=c_letters+num+s_characters;
printf("\n File contennts>>\n ");
printf("\n %d line",lines);
printf("\n %d word",words);
printf("\n %d c_letter",c_letters);
printf("\n %d digit",num);
printf("\n %d special character",s_characters);
printf("\n total %d characters",total);
}
int yywrap()
{
return 1;
}