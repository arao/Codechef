//
// Created by Akhilesh Rao on 01-Mar-17.
//
#include <bits/stdc++.h>
template <typename t>
t peasent(t a,t b){
    int res=0;
    while(b!=0){
        if(b&1)res+=a;
        a=a<<1;
        b=b>>1;
    }
    return res;
}
using namespace std;
int main() {
    for(int a=0;a<10;a++)
        for(int b=0;b<10;b++)
    //int a,b;
    //cin>>a>>b;
    cout<<"peasent: "<<peasent(a,b)<<"  normal: "<<a*b<<endl;
}
