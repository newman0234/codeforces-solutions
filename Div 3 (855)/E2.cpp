#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],int src,vector<int>&temp,bool vis[]){
    vis[src]=true;
    temp.push_back(src);
    for(auto nbr:adj[src]){
        if(!vis[nbr]){
            dfs(adj,nbr,temp,vis);
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str,target;
        cin>>str>>target;
        str='!'+str;
        target='!'+target;
        vector<int>adj[n+1];
        bool vis[n+1];
        for(int i=0;i<=n;i++){
            vis[i]=false;
        }
        for(int i=1;i<n;i++){
            if((i+k)<=n){
                adj[i].push_back(i+k);
                adj[i+k].push_back(i);
            }
            if((i+k+1)<=n){
                adj[i].push_back(i+k+1);
                adj[i+k+1].push_back(i);
            }
        }
        int f=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                vector<int>temp;
                dfs(adj,i,temp,vis);
                string s1="";
                string s2="";
                for(auto idx:temp){
                    s1+=str[idx];
                    s2+=target[idx];
                }
                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());
                if(s1!=s2){
                    f=1;
                    break;
                }
            }
        }
        if(f==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
