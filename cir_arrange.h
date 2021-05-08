#include<bits/stdc++.h>
using namespace std;
int fact_n(int n)   // function to compute factorial
{
	if(n==0 || n==1)
		return 1;
	return n*fact_n(n-1);
}
float cir_arrange(vector<int>arr)
{
	map<int,int>freq;
	// cout<<"cir_arange of ";
	for(auto it=arr.begin();it!=arr.end();it++)  // find frequency of each element
	{
	// cout<<*it<<" ";
		freq[*it]++;
	}
	// cout<<'\n';
	float count;
	int fact=fact_n(arr.size()-1); // circular arrangement
	int tmp=1;
	for( auto it=freq.begin();it!=freq.end();it++)
	{
		tmp*=fact_n(it->second);
	}
	count=float(fact)/float(tmp); // removing repeating arrangements
	return count;
}
