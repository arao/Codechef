//
// Created by Akhilesh on 02-06-2017.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    long test=0;
    cin>>test;
    while(test--){
        long long u,v;
        cin>>u>>v;
        long long rank=((u+v)*(1+u+v)/2)+1+u;
        cout<<rank<<endl;
    }
}
