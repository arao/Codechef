#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool arr[n+1];
        memset(arr,false, sizeof(arr));
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            arr[a]=true;
        }
        bool flag=false;
        vector<int> chef,assistant;
        for(int i=1;i<=n;i++){
            if(arr[i]==false){
                if(flag== false){
                    chef.push_back(i);
                    flag=true;
                }
                else{
                    assistant.push_back(i);
                    flag= false;
                }
            }
        }
        vector<int > ::iterator it;
        if(!chef.empty())
            for(it=chef.begin();it<chef.end();++it)
                cout<<*it<<" ";
        cout<<endl;
        if(!assistant.empty())
            for(it=assistant.begin();it<assistant.end();++it)
                cout<<*it<<" ";
        cout<<endl;
    }
}
