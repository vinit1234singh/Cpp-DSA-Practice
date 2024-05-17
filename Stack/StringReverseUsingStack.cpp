#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> s;
	string str;
	cin>>str;
	string rev;
	for(int i=0;i<str.length();i++)
	{
		s.push(str[i]);
	}
	while(!s.empty())
	{
		
		rev = rev+s.top();
		s.pop();
	}
	cout<<rev;
}
