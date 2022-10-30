
#include<stdio.h>
#include<string.h>
void pm();
void plus();
void div();
int i,ch,j,l,addr=100;
char ex[10], exp[10] ,exp1[10],exp2[10],id1[5],op[5],id2[5];
void main()
{

printf("\n1.assignment\n2.arithmetic\n3.Exit\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the expression with assignment operator:");
scanf("%s",exp);
l=strlen(exp);
exp2[0]='\0';
i=0;
while(exp[i]!='=')
{
i++;
}
strncat(exp2,exp,i);
strrev(exp);
exp1[0]='\0';
strncat(exp1,exp,l-(i+1));
strrev(exp1);
printf("Three address code:\nt1=%s\n%s=t2\n",exp1,exp2);
break;

case 2:
printf("\nEnter the expression with arithmetic operator:");
scanf("%s",ex);
strcpy(exp,ex);
l=strlen(exp);
exp1[0]='\0';

for(i=0;i<l;i++)
{
if(exp[i]=='+'||exp[i]=='-')
{
if(exp[i+2]=='/'||exp[i+2]=='*')
{
pm();
break;
}
else
{
plus();
break;
}
}
else if(exp[i]=='/'||exp[i]=='*')
{
div();
break;
}
}
break;

break;
case 3:
exit(0);
}

}
void pm()
{
strrev(exp);
j=l-i-1;
strncat(exp1,exp,j);
strrev(exp1);
printf("Three address code:\nt1=%s\nt2=%c%ct1\nx=t2",exp1,exp[j+1],exp[j]);
}
void div()
{
strncat(exp1,exp,i+2);
char exp_temp[10] = "";
for(int i=2; i<strlen(exp1); i++)
exp_temp[i-2] = exp1[i];
printf("Three address code:\nt1=%s\nt2=t1%c%c\nx=t2",exp_temp,exp[i+2],exp[i+3]);

}
void plus()
{
strncat(exp1,exp,i+2);
char exp_temp[10] = "";
for(int i=2; i<strlen(exp1); i++)
exp_temp[i-2] = exp1[i];
printf("Three address code:\nt1=%s\nt2=t1%c%c\nx=t2",exp_temp,exp[i+2],exp[i+3]);
}
