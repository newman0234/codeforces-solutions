#include <bits/stdc++.h>
using namespace std;
void query(int index,int low,int high,int i,int val,int segment[],int f){
    if(low==high){
        segment[index]=val;
        return;
    }
    int mid=(low+high)>>1;
    if(i<=mid){
        query((2*index)+1,low,mid,i,val,segment,!f);
    }else{
        query((2*index)+2,mid+1,high,i,val,segment,!f);
    }
    if(f){
        segment[index]=segment[2*index+1]^segment[2*index+2];
    }else{
        segment[index]=segment[2*index+1]|segment[2*index+2];
    }
}
void build_seg_tree(int index,int low,int high,int a[],int segment[],int f){
    if(low==high){
        segment[index]=a[low];
        return;
    }
    int mid=(low+high)>>1;
    build_seg_tree((2*index)+1,low,mid,a,segment,!f);
    build_seg_tree((2*index)+2,mid+1,high,a,segment,!f);
    if(f){
        segment[index]=segment[2*index+1]^segment[2*index+2];
    }else{
        segment[index]=segment[2*index+1]|segment[2*index+2];
    }
}
int main() {
    int n,q;
    cin>>n>>q;
    int len=pow(2,n);
    int a[len];
    int segment[4*len];
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    if(n%2==0){
        build_seg_tree(0,0,len-1,a,segment,1);
    }else{
        build_seg_tree(0,0,len-1,a,segment,0);
    }
    while(q--){
        int i,val;
        cin>>i>>val;
        i--;
        if(n%2==0){
            query(0,0,len-1,i,val,segment,1);
        }else{
            query(0,0,len-1,i,val,segment,0);
        }
        cout<<segment[0]<<endl;
    }

}
