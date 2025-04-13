#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // two pointer approach - O(N)
    int l=0,r=l+1;int ans=0;
    while(r<n){
        if(arr[l]>arr[r]){
            l++;
            r++;
        }
        else{
            ans=max(ans,arr[r]-arr[l]);
            r++;
        }
    }
    cout<<ans;
}