#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	int a,b;
	cout<<"Enter the Number of Element of first array: \n";
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
		s.insert(arr[i]);
	}
	cout<<"Enter the Number of Element of second array: \n";
	cin>>b;
	int ar[b];
	for(int i=0;i<b;i++)
	{
		cin>>ar[i];
		s.insert(ar[i]);
	}
//	int i;
cout<<"Union of two array"<<endl;
	set<int>::iterator itr;
	for(itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
}
