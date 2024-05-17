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
	//1 2 3 4 5 6 7
	int s_size = s.size()/2;
//	cout<<"Middle Element is: "<<s_size/2<<endl;

	while(!s.empty())
	{
		for(int i=0;i<s_size;i++)
		{
			s.pop();
		}
		cout<<s.top();
		for(int i=0;i<s.size()-s_size;i++)
		{
			s.pop();
		}
		
	}
	
}
