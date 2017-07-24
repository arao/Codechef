#include<iostream>
using namespace std;
bool IsPrime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y;
        z=x+y+1;
        while(true)
        {
            if(IsPrime(z))
            {
                break;
            }
            z++;

        }
        cout<<z-(x+y)<<endl;
    }
}
