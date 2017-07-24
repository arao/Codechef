//
// Created by Akhilesh on 04-06-2017.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >>c;
        long long sum=0;
        set<int> arrx,arry,arrz;
        for ( int i = 0; i < a; i++ ){
            int temp;
            cin >> temp;
            arrx.insert(temp);
        }
        for ( int i = 0; i < b; i++ ){
            int temp;
            cin >> temp;
            arry.insert(temp);
        }
        for ( int i = 0; i < c; i++ ){
            int temp;
            cin >> temp;
            arrz.insert(temp);
        }
        set<int> :: iterator x,y,z;
        for (  y = arry.begin(); y != arry.end() ; y++ ){
            for ( x = arrx.begin(); x != arrx.end(); x++ ){
                if ( *x > *y )continue;
                for (  z = arrz.begin(); z != arrz.end(); z++ ){
                    if ( *z > *y )continue;
                  //  cout << "triplet" << *x << " " << *y << " " << *z  << endl;
                    sum = ( sum + ( *x + *y ) * ( *z + *y ) ) %1000000007;
                }
            }
        }
        cout << sum <<endl;
    }
}