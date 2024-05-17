#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int ele;
	vector<int>::iterator itr,it;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
		
	}
	for(itr=v.begin();itr!=v.end();itr++)
	{
		for(it=itr+1;it!=v.end();it++)
		{
			if(*itr == *it)
			{
				cout<<*it<<" ";
//				v.erase(it);
				v.erase(itr);
				break;
			}
		}
	}
	
}
