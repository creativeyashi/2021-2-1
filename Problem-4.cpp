#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n; 
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
	  cin>>arr[i];
	}
	int cnt = 0;
	map<int,int> dict;
	
	for(int i=1; i<10; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        if(arr[j]%i==0)
	        {
	            cnt++;
	        }
	    }     
	    dict[i] = cnt;
	    cnt = 0;
	}
	
	
	for(auto it=dict.begin(); it!=dict.end(); it++)
	{
	    cout<<it->first<<" : "<<it->second<<endl;
	}
	return 0;
}
