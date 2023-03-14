#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        typedef long long ll;
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum1=(n*(n+1))/2;
        ll sum2=0;
        for(int i=0;i<n;i++){
            sum2+=arr[i];
        }
       // cout<<sum2%sum1<<endl;
       vector<int>ans;
        if((sum2%sum1)==0){
            long long int val=sum2/sum1;
            int f=1;
            for(int i=0;i<n;i++){
                 if(i==0){
                     if(((arr[i]-arr[n-1])-val)%n==0){
                        
                           ll res=-((arr[i]-arr[n-1])-val)/n;
                           ans.push_back(res);
                     }
                     else{
                         f=0;
                         break;
                     }
                 }else{
                     if(((arr[i]-arr[i-1])-val)%n==0){
                         ll res=-((arr[i]-arr[i-1])-val)/n;
                         ans.push_back(res);
                     }else{
                         f=0;
                         break;
                     }
                 }
            }
            for(int i=0;i<ans.size();i++){
                    if(ans[i]<=0){
                        f=0;
                        break;
                    }
                }
           
            if(f==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}
