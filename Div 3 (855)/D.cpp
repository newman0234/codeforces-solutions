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
       // set<string>st;
       int count=0;
        for(int i=2;i<n;i++){
           if(i==2){
               if(str[i]!=str[i-2]){
                   count++;
               }
               count++;
           }else{
               if(str[i]==str[i-2]){
                   continue;
               }else if(str[i]==str[i-2] and str[i-1]==str[i-3]){
                   continue;
               }else{
                   count++;
               }
           }
        }
        cout<<count<<endl;
    }
}
