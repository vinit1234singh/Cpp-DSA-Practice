#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    unordered_map<int, int> um;
	    for(int i=0;i<n;i++){
	        um[arr[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i] == i+1){
	            um.erase(i+1);
	        }
	    }
	    int c = 0;
	    for(auto i:um){
	        if(i.second>=k){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	    
	    
	}
	return 0;
}

