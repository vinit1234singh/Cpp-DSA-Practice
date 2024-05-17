#include<bits/stdc++.h>
using namespace std;

int gcdof2no(int a, int b)
{
	if(b==0)
		return a;


	return gcdof2no(b%a,a);
}

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
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(abs(v[j]-v[i] == 1))
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	
	
}
