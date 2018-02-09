#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string a,b,c;
    char d;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    c=a+b;
    cout<<c<<endl;
    d=a[0];
    a[0]=b[0];
    b[0]=d;
    cout<<a<<" "<<b;
    return 0;
}

