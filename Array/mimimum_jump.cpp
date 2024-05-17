#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int ele,k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	sort(v.begin(),v.end());
	int lowest;
	for(int i=0;i<v.size();i++)
	{
		if((v[i]+k)<=v[i+1])
		{
			lowest = v[i]+k;
			break;
		}
	}
	int highest;
	for(int i=v.size()-1;i>=0;i--)
	
	{
		if((v[i]-k)>=v[i+1])
		{
			highest = v[i]-k;
			break;
		}
	}
	cout<<highest-lowest<<endl;	
}
