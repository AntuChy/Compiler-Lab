#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int cnt=0,i;
printf("Enter an identifier:");
gets(str);
char keyword[32][10]={"auto","double","int","struct","break",
"else","long", "switch","case","enum","register","typedef","char",
"extern","return","union","const","float","short","unsigned","continue","for",
"signed","void","default","goto","sizeof","voltile","do","if","static","while"} ;
for(i = 0; i < 32; i++)
{
if(strcmp(str,keyword[i])==0)
    {
        printf("Invalid identifier.");
        return 0;
    }
}
if((str[0]>='a'&&str[0]<='z') ||
   (str[0]>='A'&&str[0]<='Z') ||
   (str[0]=='_') || (str[0]=='$'))
{
    for(i=1;i<=strlen(str);i++)
    {
    if((str[i]>='a'&& str[i]<='z') ||
    (str[i]>='A' && str[i]<='Z') ||
    (str[i]>='0'&& str[i]<='9') || (str[i]=='_'))
        {
        cnt++;
        }
    }
}
if(cnt==(strlen(str)-1))
{
    printf("Valid identifier.");
}
else
{
    printf("Invalid identifier.");
}
return 0;
}
