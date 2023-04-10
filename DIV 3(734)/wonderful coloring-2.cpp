#include <bits/stdc++.h>
using namespace std;
int main() {
      int t;
      cin>>t;
      while(t--){
          int n,k;
          cin>>n>>k;
          int a[n];
          for(int i=0;i<n;i++){
              cin>>a[i];
          }
          int fre[n+1];
          for(int i=0;i<=n;i++){
              fre[i]=0;
          }
          map<int,vector<int>>umap;
          for(int i=0;i<n;i++){
              fre[a[i]]++;
              umap[a[i]].push_back(i);
          }
          int ans[n];
          for(int i=0;i<n;i++){
              ans[i]=0;
          }
          vector<int>tocolor;
          for(int i=1;i<=n;i++){
              if(fre[i]>=k){
                  vector<int>f=umap[i];
                  for(int j=0;j<k;j++){
                       ans[f[j]]=j+1;
                  }
              }else{
                  for(int j=0;j<fre[i];j++){
                      tocolor.push_back(umap[i][j]);
                  }
              }
          }
          int len=tocolor.size();
          for(int i=0;i<tocolor.size();){
                if(len>=k){
                    len-=k;
                    for(int j=0;j<k;j++){
                        ans[tocolor[i]]=j+1;
                        i++;
                    }
                }else{
                    break;
                }
          }
          for(int i=0;i<n;i++){
              cout<<ans[i]<<" ";
          }
          cout<<endl;
      }
}
