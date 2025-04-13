#include<bits/stdc++.h>
using namespace std;
int main(){
    //1. TWO SUM Problem
    // Input is like 
    //n=5, k=3
    //arr[n]={1 4 2 5 9}
    // output- 0 2
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Brute force - O(N^2)
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j;
                break;
            }
        }
    }
    cout<<endl;
    //Optimal approach using hashmap - O(n)
    unordered_map<int,int> hsm;
    for(int i=0;i<n;i++){
        int comp = k-arr[i];
        if(hsm.find(comp)!=hsm.end()){ // here hsm.end() thats means it is not reaching to the exnd of the map
            cout<< hsm[comp]<<" "<< i;
        }
        hsm[arr[i]]=i;
}
    return 0;
}