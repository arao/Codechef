//
// Created by Akhilesh on 06-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string symbols[]={"T","HT","F","HF","H","XH","C","XC","X","IX","V","IV","I"};
    int i=0;
    while(n>0){
        //cout<<n<<endl;
        if(n>=number[i]){
            cout<<symbols[i];
            n-=number[i];
        }
        else{
            i++;
        }
    }
}
