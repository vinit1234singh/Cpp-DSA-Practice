#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> s;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(s.empty())
		{
			s.push(str[i]);
		}
		else if((s.top() == '{' && str[i] == '}') || (s.top() == '(' && str[i]==')' )|| s.top() == '[' && str[i] == ']')
		{
			s.pop();
		}
		else{
			s.push(str[i]);
		}
		
	}
	if(s.empty())
	{
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
}
