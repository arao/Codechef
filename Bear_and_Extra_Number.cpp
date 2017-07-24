//
// Created by Akhilesh Rao on 06-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
long sol(vector<long> vec){
    long n=vec.size();
    long i;
    for( i=0;i<n-2;i++){
        if(vec[i]+1!=vec[i+1])return vec[i];

    }
    if(vec[i]!=vec[i+1])
    return vec[i+1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long> vec;
        for(int i=0;i<n;i++){
            long a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        cout<<sol(vec)<<endl;

    }
}