#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   long long int n;
   cin>>n;
   long long a[n];
   for(int i=0;i<n;++i)
    cin>>a[i];
   int values[n];
   values[0]=1;
   for(int i=1;i<n;++i)
   {
       if(a[i]>a[i-1])
        values[i]=values[i-1]+1;
       else
        values[i]=1;
    }
    long long ans=values[n-1];
    int tmp;
    for(int i=n-2;i>=0;--i)
    {
        if(a[i]>a[i+1])
            tmp=values[i+1]+1;
        else
            tmp=1;
        ans+=max(tmp,values[i]);
        values[i]=tmp;
    }
    cout<<ans;
    return 0;
}

