#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{  
	long long n,k;
	long long arr[1000000];
	long long index[1000000];
	cin>>n>>k;
	for(long long i=0;i<n;++i)
	{
	       cin>>arr[i];
	       index[arr[i]]=i;
	}
	
	for(long long i=0;i<n && k>0;i++)
	{
		if(arr[i]==n-i)
		{
			continue;
		}
		arr[index[n-i]]=arr[i];
		index[arr[i]]=index[n-i];
		arr[i]=n-i;
		index[n-i]=i;
		k--;
	}
    for(long long i=0;i<n;++i)
	{
	       cout<<arr[i]<<" ";
	}
	return 0;
}

