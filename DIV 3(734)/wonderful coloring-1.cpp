#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[26];
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        int ans=0;
        int extra=0;
        for(int i=0;i<26;i++){
            if(a[i]>=2){
                ans++;
            }else{
                extra+=a[i];
            }
        }
        cout<<ans+(extra/2)<<endl;
    }
}
