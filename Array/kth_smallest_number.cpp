#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cout<"Enter the Number of integer in array\n";
	cin>>n;
	cout<<"Enter kth Samllest number: \n";
	cin>>k;
	vector<int> v;
	int ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
		
	}
	sort(v.begin(),v.end());
	cout<<"Kth Smallest Number is: "<<v[k-1]<<endl;
}
