#include<bits/stdc++.h>
int main()
{
    char s[50],c;
    int state=0,i=0;
    while(1){
            state=0,i=0;
    printf("Enter a string:");
    gets(s);
    while(s[i]!='\0')
    {

        switch(state)
        {
        case 0:
            c=s[i++];
            if(c=='b')
                state=1;
            else
                state=6;
            break;
        case 1:
            c=s[i++];
            if(c=='a')
                state=2;
            else if(c=='b')
                state=1;
            else
                state=6;
            break;
        case 2:
            c=s[i++];
            if(c=='b')
                state=3;
            else if(c=='a')
                state=6;
            break;
        case 3:
            c=s[i++];
            if(c=='a')
                state=6;
            else if(c=='b')
                state=3;
            else
                state=6;
            break;

        case 6:
            exit(0);
        }
        if(state==6) break;

    }
   printf("%d\n",state);
    if(state==2 or state==3)
        printf("accepted\n");
    else
        printf("Rejected\n");

    }

}
