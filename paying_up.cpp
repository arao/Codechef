//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;

string sol(vector<int>note, long notes,long amount){
    int subset=(int)pow(2.0,(double)notes);
    for(int i=0;i<subset;i++){
        int sum=0;
        unsigned int mask=(unsigned int)pow(2.0,(double)notes-1.0);
        for(int j=0;j<note.size();j++){
            if((i&mask)!=0){
                sum+=note[j];
            }
            mask=mask>>1;
            if(sum>amount){
                break;
            }
            if(sum==amount){
                return "Yes\n";
            }
        }

    }
    return "No\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long notes,amount;
        cin>>notes>>amount;
        vector<int > note;
        for(int i=0;i<notes;i++){
            int a;
            cin>>a;
            note.push_back(a);
        }
        cout<<sol(note,notes,amount);
    }
}
