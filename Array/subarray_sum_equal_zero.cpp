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
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int currentSum = 0;
			for(int k=i;k<j;k++)
			{
				currentSum = currentSum + arr[k];
				if(currentSum==0)
				{
					cout<<"Yes"<<endl;
					c++;
					break;
				}
			}
			if(c>0)
			{
				break;
			}
		}
		if(c>0)
		{
			break;
		}
	}
	if(c==0)
	{
		cout<<"NO"<<endl;
	}
}
