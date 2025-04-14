#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Brute force approach - O(N^2)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<true<<endl;
            }
        }
    }
    // Better approach - First sort and then compare neighbour elements - O(NLOGN)
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<true<<endl;
        }
    }
    
    // Optimal Approach - HashSet - O(N)
    set<int> ust;
    for(int i=0;i<n;i++){
        if(ust.find(arr[i])!=ust.end()){
            cout<< "duplicatie found at" <<i<<endl;
            break;
        }
        ust.insert(arr[i]);
    }
}