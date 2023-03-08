#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        str+='!';
        string ans="";
        for(int i=0;i<n;i++){
            if(tolower(str[i])!=tolower(str[i+1])){
                ans+=tolower(str[i]);
            }
        }
       // cout<<ans<<endl;
         if(ans=="meow"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
   
}