#include <bits/stdc++.h>
using namespace std;
long long gcd(long long int a,long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        typedef long long ll;
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll odd_gcd=a[1];
        ll even_gcd=a[0];
        for(int i=0;i<n;i++){
            if(i%2==0){
                even_gcd=gcd(even_gcd,a[i]);
            }else{
                odd_gcd=gcd(odd_gcd,a[i]);
            }
        }
        ll ans=0;
        int f1=1,f2=1;
        for(int i=1;i<n;i+=2){
            if(a[i]%even_gcd==0){
                f1=0;
                break;
            }
        }
        for(int i=0;i<n;i+=2){
            if(a[i]%odd_gcd==0){
                ans=a[i];
                f2=0;
                break;
            }
        }
        if(f1==1){
            cout<<even_gcd<<endl;
        }else if(f2==1){
            cout<<odd_gcd<<endl;
        }else{
            cout<<0<<endl;
        }


        
    }
}
