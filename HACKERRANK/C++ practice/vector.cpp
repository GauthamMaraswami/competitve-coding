#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
int size;
cin>>size;
int a,pos,c,d;
for(int i=0;i<size;i++)
{
 cin>>a;
 v.push_back(a);
}
    cin>>pos;
    cin>>c>>d;
    v.erase(v.begin()+(pos-1));
    v.erase(v.begin()+c-1,v.begin()+d-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

