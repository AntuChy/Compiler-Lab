#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
	cout << "\t>>>Enter 1 to exit<<<< \n";
	while(s != "1") {
    cout << "Enter a number: ";
    cin >> s;
    int sz = s.size();
    int pos_e = sz, pos_dot = 0;
    for(int i=0; i<sz; ++i) {
        if(!((s[i]>='0' && s[i]<='9') || s[i] == '.' || s[i]=='E' || s[i]=='+' || s[i]=='-')) {
            cout << "Rejected!";
            return 0;
        }
        if(s[i] == '.') {
           if(!(s[i-1]>='0' && s[i-1]<='9')) {
            cout << "Rejected!";
            return 0;
           }
           else if(!(s[i+1]>='0' && s[i+1]<='9')) {
            cout << "Rejected!";
            return 0;
           }
        }
        if(s[i] == 'E') {
            if(!(s[i-1]>='0' && s[i-1]<='9')) {
            cout << "Rejected!";
            return 0;
           }
           else if(!(s[i+1]>='0' && s[i+1]<='9') && s[i+1]!='+' && s[i+1]!='-') {
            cout << "Rejected!";
            return 0;
           }
        }
        if(s[i] == '+' || s[i] == '-') {
            if(s[i-1] != 'E') {
                cout << "Rejected!";
                return 0;
            }
            else if(!(s[i+1]>='0' && s[i+1]<='9')) {
                cout << "Rejected!";
                return 0;
            }
        }
        if(s[i] == '.') pos_dot = i;
        if(s[i] == 'E') pos_e = i;
    }
    if(pos_dot > pos_e)
        cout << "Rejected!!\n";
    else
        cout << "Accepted!!\n";
     }
    return 0;}


