#include<iostream>
#include<iomanip>
using namespace std;
/*void sorting(int*banknote,int n)
{
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(flag==true) break;
        for(int j=0;j<n-i-1;j++)
        {
            if(banknote[j]>banknote[j+1])
            {
                int temp=banknote[j];
                banknote[j+1]=banknote[j];
                banknote[j]=temp;
                flag=true;
            }
        }
    }
}*/
int main()
{
    int banknote[10]={1,8,2,5,4,4,3,2,1,5};
    int n=10;
    //sorting(arra,10);
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int i=0;i<10;i++)
            {
            cout<<banknote[i];
            }
            cout<<endl;
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
    for(int i=0;i<10;i++)
    {
        cout<<banknote[i];
    }
}
