//
// Created by Akhilesh on 06-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zeros=0,ones=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a;
                cin>>a;
                a==0?(zeros+=1):(ones+=1);
            }
        }
        int k=n-1;
        for(int i=1;zeros>=2*i;i++){
            //cout << "zeros:  " << zeros << "k is:" << k <<endl;
            zeros -= (2 * i);
            k--;

        }

        if(k<0)k=0;
        cout<<k<<endl;


    }
}