#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> v;
    while(n>1)
    {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                n = n/i;
                cout<<i<<" ";
               // v.push_back(i);
                break;
            }
        }
    }
    
    return 0;
}

