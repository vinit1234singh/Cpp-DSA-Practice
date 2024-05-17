#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int op;
        int orn = n;
        while(n>k)
        {
            // op = n;
            n = n-k;
            op = n;
           // cout<<n<<" ";
        }
        if(n == k)
        {
        	cout<<n-k<<endl;
		}
		else if(n<k){
			cout<<n<<endl;
		}
		else{
			cout<<op<<endl;
		}
        
    }
	return 0;
}

