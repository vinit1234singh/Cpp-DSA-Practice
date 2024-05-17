#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	for(int i=0;i<n;i++)
	{
		v[i] = v[i]*v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
}
