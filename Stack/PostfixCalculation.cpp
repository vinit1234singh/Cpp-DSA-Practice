#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*')
		{
			int n = int(str[i]) - 48;
			st.push(n);
			//cout<<typeid(n).name()<<endl;
		}
		else if(str[i] == '+')
		{
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			st.push(x+y);
		}
		else if(str[i] == '-')
		{
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			st.push(y-x);
		}
		else if(str[i] == '*')
		{
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			st.push(x*y);
		}
		else if(str[i] == '/')
		{
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			st.push(y/x);
		}
	}
	cout<<st.top();
}
