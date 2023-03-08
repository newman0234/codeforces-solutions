#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int small[26];
        int captial[26];
        for(int i=0;i<26;i++){
            small[i]=0;
            captial[i]=0;
        }
        for(int i=0;i<n;i++){
            if(str[i]>=65 and str[i]<=91){
                captial[str[i]-'A']++;
            }else{
                small[str[i]-'a']++;
            }
        }
        int ans=0;
        int extra=0;
        for(int i=0;i<26;i++){
            ans+=min(small[i],captial[i]);
            extra=(max(small[i],captial[i])-min(small[i],captial[i]));
             if((extra)/2>=k){
                 ans+=k;
                 k=0;
            }else{
               ans+=(extra/2);
               k-=(extra/2);
            }
        
        }
       
        cout<<ans<<endl;
    }
   
}