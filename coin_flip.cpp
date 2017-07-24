//
// Created by Akhilesh Rao on 02-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long g;
        cin>>g;
        while(g--){
            long initial,round,Query;
            cin>>initial>>round>>Query;
            long even=round/2;
            long odd=round-even;
            if(round%2==0) {
                if (initial == Query) cout << odd << endl;
                else cout << even << endl;
            }
            else{
                if (initial == Query) cout << even << endl;
                else cout << odd << endl;
            }
        }
    }
}
