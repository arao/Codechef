//
// Created by Akhilesh on 07-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=2;
    cout<<i<<"  ";
    i++;
    for(;i<100;i++){
        int flag=false;
        for(int j=2;j<i;j++ ){
            if(i%j==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<i<<"  ";
        }
    }

}