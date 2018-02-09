#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
    int i;
    deque<int>qi;
    for(i=0;i<k;++i)
        {
        while(!qi.empty()&& arr[i]>=arr[qi.back()])
            qi.pop_back();
        
        qi.push_back(i);
    }
    for(i=k;i<=n;++i){
       cout<<arr[qi.front()]<<" ";
        while(!qi.empty()&&qi.front()<=i-k)
            {
            qi.pop_front();
        }
        while(!qi.empty()&& arr[i]>=arr[qi.back()])
            qi.pop_back();
        qi.push_back(i);
    }
    
    
   //Write your code here.
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
       cout<<endl;
     }
     return 0;
}

