//
// Created by Akhilesh on 02-06-2017.
//
#include <bits/stdc++.h>
using namespace std;
int arr[500];


bool check(vector<int> &vec,int i){
    unsigned long start=0,end=vec.size()-1;
    while(start<end){
        if(vec[start]+vec[end]==i)return true;
        else if(vec[start]+vec[end]<i){
            arr[vec[start]+vec[end]]=-1;
            start++;
        }
        else if(vec[start]+vec[end]>i){
            arr[vec[start]+vec[end]]=-1;
            end--;
        }
    }
    return false;
}
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    for(int i=3;i<500;i++){
        if(arr[i]==-1)continue;
        if(check(vec,i)){
           arr[i]=-1;
        }
        else{
            vec.push_back(i);
        }
    }
    for(auto i:vec){
        cout<<i<<",";
    }
    cout<<endl<<vec.size()<<endl;
}
