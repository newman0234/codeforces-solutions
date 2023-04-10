#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c1;
        cin>>c1;
        if(c1%3==0){
            cout<<c1/3<<" "<<c1/3<<endl;
        }else if(c1%3==1){
            cout<<(c1/3)+1<<" "<<c1/3<<endl;
        }else{
            cout<<c1/3<<" "<<(c1/3)+1<<endl;
        }
    }
}