#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int> > v, int sv, vector<bool> &visited)
{
	cout<<sv<<" ";
	visited[sv] = true;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(v[sv][i] == 1 && visited[i] == false){
			print(v,i,visited);
		}
	}
}

int main(){
	
//	vector<vector<int> > matrix(n,vector<int>(n,0));

	int n,e;
	cin>>n>>e;
	vector<vector<int> > matrix(n,vector<int>(n,0));
	for(int i=0;i<e;i++){
		int fv,sv;
		cin>>fv>>sv;
		matrix[fv][sv] = 1;
		matrix[sv][fv] = 1;
	}
	vector<bool> visited(n,false);
	print(matrix,0,visited);
}
