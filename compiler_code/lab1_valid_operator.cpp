#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cout << "\t>>>Enter 1 to exit<<<< \n";
	while(s != "1") {
	cout << "Enter any operator: ";
		cin >> s;
	if(s == "<=") {
		cout << "less than and equal to \n";
	}
	else if(s == "<") {
		cout << "less than \n";
	}
	else if(s == ">=") {
		cout << "greater than and equal to\n";
	}
	else if(s == ">") {
		cout << "greater than\n";
	}
	else if(s == "==") {
		cout << "equal to \n";
	}
	else if(s == "!=") {
		cout << "not equal to\n";
	}
	else if(s == "!") {
		cout << "bit not\n";
	}
	else if(s == "=") {
		cout << "assignment operator\n";
	}
	else if(s == "++") {
		cout << "increament\n";
	}
	else if(s == "--") {
		cout << "decrement\n";
	}
	else if(s == "+") {
		cout << "addition\n";
	}
	else if(s == "-") {
		cout << "substraction\n";
	}
	else if(s == "*") {
		cout << "multiplication\n";
	}
	else if(s == "/") {
		cout << "divition\n";
	}
	else if(s == "%") {
		cout << "modulas\n";
	}
	else if(s == "&&") {
		cout << "logical AND\n";
	}
	else if(s == "&") {
		cout << "bitwise AND\n";
	}
	else if(s == "||") {
		cout << "logical OR\n";
	}
	else if(s == "|") {
		cout << "bitwise OR\n";
	}
	else if(s == "<<") {
		cout << "left shift\n";
	}
	else if(s == ">>") {
		cout << "right shift\n";
	}
	else if(s == "~") {
		cout << "bitwise complement\n";
	}
	else if(s == "^") {
		cout << "bitwise exclusive OR\n";
	}
	else if(s == "?:") {
		cout << "conditional opeator\n";
	}
	else {
		cout << "not an valid operator\n";
	}
	cout<< "\n";
	}
	return 0;
}

