//
// Created by Akhilesh Rao on 06-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        bool flag=false;
        int xenny[n],yana[n];
        int xennystart=0,yannastart=0;
        for(int i=0;i<n;i++){
            cin>>xenny[i];
        }
        for(int i=0;i<n;i++){
            cin>>yana[i];
        }
        for(int i=0;i<n;i++){
            int ixenny=xenny[i],iyanna=yana[i];

            if(!flag){
                xennystart+=ixenny;
                yannastart+=iyanna;
                flag=true;
            }
            else{
                xennystart+=iyanna;
                yannastart+=ixenny;
                flag=false;
            }
            //cout<<"Xenny:  "<<xenny<<"  yanna:  "<<yanna<<" xestart:  "<<xennystart<<"  yannastart:  "<<yannastart<<endl;
        }
        cout<<min(xennystart,yannastart)<<endl;
    }
}