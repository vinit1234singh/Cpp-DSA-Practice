#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	vector<int> v;
	int ele;
	for(int i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	set<int> s;
	for(int i=0;i<n;i++)
	{
		s.insert(v[i]);
	}
	cout<<s.size();
}
