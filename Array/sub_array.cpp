#include<iostream>
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
	int currentsum = 0;
	int maxsum = arr[0];
	for(int i=0;i<n;i++)
	{
		currentsum = currentsum + arr[i];
		if(currentsum <0)
		{
			currentsum = 0;
		}
		maxsum = max(maxsum,currentsum);
	}
	cout<<maxsum<<endl;
}
