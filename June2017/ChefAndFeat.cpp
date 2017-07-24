//
// Created by Akhilesh on 08-06-2017.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        long long value = 0,sum = 0,size = 0,pvalue = 0;
        for (int i = 0; i < n; i++) {
            cin >> value;
            if(value<=0){sum+=value;}
            else{
                pvalue+=value;
                size++;
            }
        }
        cout << ((pvalue*size)+sum) << endl;
    }
}
