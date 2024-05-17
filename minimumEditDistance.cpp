#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string s1,s2;
	cin>>s1>>s2;
	unordered_map<char,int> um1;
	unordered_map<char,int> um2;
	for(int i=0;i<s1.length();i++){
		if(um.find(s1[i]) == um1.end()){
			um1.insert(make_pair(s1[i],1));
		}
		else{
			um1[s1[i]]++;
		}
		
	}
	for(int i=0;i<s2.length();i++){
		if(um2.find(s2[i]) == um2.end()){
			um2.insert(make_pair(s2[i],1));
		}
		else{
			um1[s2[i]]++;
		}
		
	}
	if(um1.size()>um2.size()){
		for(auto& it:um1){
		for(auto& it1:um2){
			if(it.first == it1.first){
				if(it.second>=it1.second){
					sum = sum+it.second;
				}
				else{
					sum = sum + it1.second
				}
			}
		}
	}
		
	}
	else{
		for(auto& it1:um1){
		for(auto& it:um2){
			if(it1.first == it.first){
				if(it1.second>=it.second){
					sum = sum+it1.second;
				}
				else{
					sum = sum + it.second
				}
			}
		}
	}
	}
	cout<<max(um1.size()-sum, um2.size()-sum);
}
