//
// Created by Akhilesh Rao on 10-Feb-17.
//
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,unpaid=0,fine=0,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            if(!flag){
                cin>>arr[i];
                if(!arr[i]){
                    flag=1;
                    fine++;
                    unpaid++;
                }
            }
            else{
                cin>>arr[i];
                if(!arr[i])unpaid++;
                fine++;
            }
        }
        cout<<(unpaid*1000)+(fine*100)<<endl;
    }
}
