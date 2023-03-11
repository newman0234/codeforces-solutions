#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       int a[n];
      //priority_queue<int>pq;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       sort(a,a+n);
       
       int ans=0;
       int len=n-(2*k);
       for(int i=0;i<len;i++){
           ans+=a[i];
       }
       for(int i=len;i+k<n;i++){
           ans+=(a[i]/a[i+k]);
       }
       cout<<ans<<endl;
    }
}
