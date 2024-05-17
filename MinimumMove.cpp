#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	       cin>>n;
	    int arr[n];
	    //cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(),v.end());
	    int a = v[n-1];
	    int b = a/2;
	    int diff = 0;
	    int diff1 = 0;
	    int c = 0;
	    if(b%2==0){
	        
	        
	        for(int i=0;i<n;i++){
	            diff = diff + abs(b-arr[i]);
	            if(arr[i] == a){
	                c++;
	            }
	        }
	        if(c==n){
	            cout<<"0"<<endl;
	        }
	        else{
	            cout<<diff<<endl;
	        }
	    }
	    else{
	        for(int i=0;i<n;i++){
	            diff = diff + (abs(-arr[i]));
	            if(arr[i] == a){
	                c++;
	            }
	        }
	        for(int i=0;i<n;i++){
	            diff1 = diff1 + abs(b-arr[i] + 1);
	        }
	        
	        if(c==n){
	            cout<<"0"<<endl;
	        }
	        else{
	            cout<<min(diff,diff1)<<endl;
	        }
	        
	    }
	}
	return 0;
}

