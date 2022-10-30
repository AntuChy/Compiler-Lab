#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int isKeyword(char buffer[]){
char keywords[32][10] = {"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int i, flag = 0;
for(i = 0; i < 32; ++i){
if(strcmp(keywords[i], buffer) == 0){
flag = 1;
break;
}
}
return flag;
}
bool isPunctuator(char ch) {	//check if the given character is a punctuator or not
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
        ch == '&' || ch == '|'|| ch == '$') {
            return true;
    }
    return false;
}

bool validIdentifier(string str) {	/// check if the given identifier is valid or not
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || isPunctuator(str[0]) == true) {
            return false;
    }			/// if first character of string is a digit or a special character, identifier is not valid
    int i,len = str.size();
    if (len == 1) {
        return true;
    }			/// if length is one, validation is already completed, hence return true
    else {
    for (i = 1 ; i < len ; i++)		/// identifier cannot contain special characters
    {
        if (isPunctuator(str[i]) == true)
        {
            return false;
        }
    }
    }
    return true;
}
int main(){
char ch, buffer[15], operators[] = "+-*/%=";
ifstream fin("program.txt");
int i,j=0;
if(!fin.is_open()){
cout<<"error while opening the file\n";
exit(0);
}
bool t = false;
while(t) {
while(!fin.eof()){
   ch = fin.get();



   if(isalnum(ch)){
   buffer[j++] = ch;
   }
   else if((ch == ' ' || ch == '\n') && (j != 0)){
   buffer[j] = '\0';
   j = 0;
   }

}
}

FILE *f1, *f2;
char a, b;

f1 = fopen("program.txt", "r");
f2 = fopen("lexical_input.txt", "r");

a = getc(f1);
b = getc(f2);

//cout << a << " " << b;

while(a != EOF && b != EOF) {
    a = getc(f1);
    b = getc(f2);
}

if(a != b) {
    cout << "Lexical Error!" << "\n";
}

else {
    cout << "No Errors!" << "\n";
}

fin.close();

return 0;
}
