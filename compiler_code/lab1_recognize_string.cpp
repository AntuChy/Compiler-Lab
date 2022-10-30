#include<bits/stdc++.h>
using namespace std;
    int main() {
    int state=0,i,len;
	string s,str2;
	cout << "Enter a String: ";
	cin >> s;
	len=s.size();
	for(i=0; i<len; i++)
    {
		if(state==0 &&s[i]=='a')
        {
            state=0;
        }
        else if(state==0||state==1 &&s[i]=='b')
        {
           state=1;
        }
        else if(state==1&&s[i]=='a')
           {
            state=2;
            break;
           }
    }
    if(s=="a")
        {
        str2=s;
        int p = s.compare(str2);
        cout<<"'"<<s<<"'is accepted under rule 'a'"<<endl;
        }
    else if(s=="abb")
    {
        str2=s;
        int p = s.compare(str2);
        cout<<"'"<<s<<"'is accepted under rule 'abb'"<<endl;
    }
    else if(state==1)
        {cout<<"'"<<s<<"'is accepted under rule 'a*b+'"<<endl;}
    else
        {cout<<"'"<<s<<"'is not recognized."<<endl;}
	return 0;
}
