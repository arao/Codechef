#include<iostream>
using namespace std;

bool check(int x,int*arr,int sizee)
{

    for(int i=0;i<sizee;i++)
    {
        if(arr[i]==x*x)
        {
            arr[i]=-1;for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
            return true;
        }
    }
    return false;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int arr[50];
        int x;
        cout<<"enter size of array";
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<x;i++)
        {
            if(arr[i]==(-1)) continue;
            else
            {
                if(check(arr[i],arr,x))
                {
                    for(int j=0;j<x;j++)
                    {
                        cout<<arr[j];
                    }
                    cout<<endl;
                    arr[i]=-1;
                    cout<<i<<endl;;
                }
                else{cout<<"no";break;}
            }
            if(i+1==x)
                cout<<"perfact";
        }
    }

}
