//673-ParenthesesBalance.cpp
#include <iostream>
#include <stack>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	for (int j = 0; j < n; ++j)
	{
		char s[200];

		stack <char> parenthese;
		
        cin.getline(s,200);
		
		for (int i = 0; i < strlen(s); ++i)
		{
			if (s[i] == '(' || s[i] == '['){
				parenthese.push(s[i]);
			}
			else if(s[i]==')'){
				if(parenthese.empty()||parenthese.top()!='('){
					parenthese.push(s[i]);
				}
				else if(parenthese.top()=='('){
					parenthese.pop();
				}
			}
			else if(s[i]==']'){
				if(parenthese.empty()||parenthese.top()!='['){
					parenthese.push(s[i]);
				}
				else if(parenthese.top()=='['){
					parenthese.pop();
				}
			}
				
		}
		
		if (parenthese.empty()) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
		cout<<"\n";
	}
}