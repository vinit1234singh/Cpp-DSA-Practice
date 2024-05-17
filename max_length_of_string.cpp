#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int curr = 0;
	int max_len = 0;
	int temp;
	for(int i=0;i<str.length();i++)
	{
		
		if(str[i] == ' ')
		{
			max_len = max(curr, max_len);
			curr = 0;
		}
		else{
		
		curr=curr+1;
		temp = curr;
	}
	}
	if(temp>max_len)
	{
		cout<<temp;
	}
	else{
		cout<<max_len;
	}
	//cout<<str.length();
}
