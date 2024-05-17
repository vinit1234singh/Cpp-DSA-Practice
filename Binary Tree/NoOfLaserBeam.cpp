#include <iostream>
#include <vector>
using namespace std;



int main() {
    

    // Create a vector of strings
    vector<string> bank;
    string ele;
    for(int i=0;i<4;i++){
    	cin>>ele;
    	bank.push_back(ele);
	}
	int c = 0;
        string str;
        vector<int> v;
        for(int i=0; i<bank.size(); i++){
            str = bank[i];
            for(int j=0; j<str.length(); j++){
                if(str[j] == '1'){
                    c++;
                }
            }
            v.push_back(c);
            c=0;
        }
        
        int sum = 0;
        for(int i=1; i<v.size(); i++){
        	cout<<v[i]<<endl;
            sum = sum + (v[i-1]*v[i]);
        }
        cout<< sum;
 
    

    return 0;
}

