#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	sort(v.begin(),v.end());
	cout<<"Maximum Element in an array: "<<v[n-1]<<endl;
	cout<<"Minimum Element in an array: "<<v[0]<<endl;
}
