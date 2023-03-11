#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a[7];
        for(int i=0;i<7;i++){
            cin>>a[i];
        }
        long long int target=a[6];
        int s=0;
        int e=6;
        for(int i=0;i<4;i++){
            long long int s=i+1;
            long long int e=6;
            int f=1;
            while(s<e){
                if(a[i]+a[s]+a[e]==target){
                    cout<<a[i]<<" "<<a[s]<<" "<<a[e]<<endl;
                    f=0;
                    break;
                }else if((a[s]+a[i]+a[e])>target){
                    e--;
                }else{
                    s++;
                }
            }
            if(f==0){
                break;
            }
        }

    }
}
