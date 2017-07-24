#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int k;
        cin>>k;
        int previous=arr[k-1];
        sort(arr.begin(),arr.end());
        auto it=find(arr.begin(),arr.end(),previous);
        cout<<(it-arr.begin())+1<<endl;
    }
}