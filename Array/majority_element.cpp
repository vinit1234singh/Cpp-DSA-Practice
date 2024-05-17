#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c=0;
	int count=0;
	int temp = -1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<n;i++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}
			if(c>(n/2))
			{
				temp = i;
				count++;
			}
		}
	}
	if(count>0)
	{
		cout<<arr[temp];
	}
	else{
		cout<<"No majority element found";
	}
}
