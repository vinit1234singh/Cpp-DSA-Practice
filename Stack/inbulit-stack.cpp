#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int n;
	cin>>n;
	int ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		s.push(ele);
	}
	cout<<s.size()<<endl;
	cout<<"Element in Stack: "<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	cout<<s.size();
}
