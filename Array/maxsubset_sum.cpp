#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ele;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	int sum1;
	cin>>sum1;
	long long total = 1 << n;
 	int maxx = 0;
 	int c = 0;
    for (long long i = 0; i < total; i++) {
        long long sum = 0;
        for (int j = 0; j < n; j++){
		
            if (i & (1 << j)){
			
            	c++;
                sum += v[j];
                
                if(sum == sum1){
                	maxx = max(maxx,c);
                	break;
				}
				
			}
			
		}
		c = 0;        
    }
    cout << maxx << " ";
	
}
