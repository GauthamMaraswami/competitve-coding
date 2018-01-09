#include <iostream>
#include<algorithm>
using namespace std;

long long maxcontegeous(long long n,long long a[],long long &maxnoncont){
long long maxsofar=-999999;
long long maxendinghere=0;
for(int i=0;i<n;++i){

    maxendinghere=maxendinghere+a[i];

    if(maxsofar<maxendinghere)
    {
        maxsofar=maxendinghere;

    }
    if(a[i]>0)
        maxnoncont+=a[i];
    if(maxendinghere<0)
    {
        maxendinghere=0;
    }

}
if(maxnoncont==0)
    maxnoncont=*std::max_element(a,a+n);
    return maxsofar;}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
 long long maxnoncont=0;
       long long a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];

        }
        long long  res=maxcontegeous(n,a,maxnoncont);

        cout<<res<<" "<<maxnoncont<<endl;
    }
  //  cout << "Hello world!" << endl;
    return 0;
}

