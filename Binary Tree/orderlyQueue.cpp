#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example usage
    string s = "baaca";
    int k = 3;
	
	string temp;
        vector<string> v;
        //v.push_back(s);
        for(int i=0;i<s.length();i++){
            for(int i=k;i<s.length();i++){
                temp = temp + s[i];
            }
            for(int i=0;i<k;i++){
                temp = temp + s[i];
            }
            v.push_back(temp);
            s = temp;
            temp = "";
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
        	cout<<v[i]<<" ";
		}
    

    return 0;
}

