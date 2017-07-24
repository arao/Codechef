#include<iostream>
using namespace std;
void sorting(int * banknote,int n)
{
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(banknote[j]>banknote[j+1])
            {
                int temp=banknote[j];
                banknote[j]=banknote[j+1];
                banknote[j+1]=temp;
                flag=true;
            }
        }
        if(flag==false) break;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int banknote[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>banknote[i];
        }
        sorting(banknote,n);
        for(int i=n-1;i>=0;i--)
        {
            if(m==0)break;
            if(m>=banknote[i])
            {
                m=m-banknote[i];
            }

        }
        if(m==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
