#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str[n-2];
        for(int i=0;i<n-2;i++){
            cin>>str[i];
        }
        string ans="";
        ans+=str[0];
        for(int i=1;i<n-2;i++){
            char ch1=str[i-1][1];
            char ch2=str[i][0];
            if(ch1==ch2){
                ans+=str[i][1];
            }else{
                ans+=str[i];
            }
        }
        if(ans.length()<n){
            ans+='b';
        }
      cout<<ans<<endl;
    }
}
