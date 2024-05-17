#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int n;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		s.push(arr[i]);
	}
	while(!s.empty())
	{
		for(int i=0;i<n;i++)
		{
			if(s.top()<=arr[i])
			{
				v.push_back(arr[i]);
				break;
			}
		}
		s.pop();
	}
	v[v.size()-1] = -1;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
