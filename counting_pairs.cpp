#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	set<int> s;
	
	int n;
	cin>>n;
	int ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		s.insert(v[i]);
	}
	int k;
	cin>>k;
	int c=0;
	set<int>::iterator itr,it;
	for(itr=s.begin();itr!=s.end();itr++)
	{
		for(it = itr; it!=s.end();it++)
		{
			if(*itr + k == *it)
			{
				c++;
			}
		}
	}
	cout<<c;
	
	
}
