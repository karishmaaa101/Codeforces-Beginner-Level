#include <bits/stdc++.h>
#define ll long long
#ifdef Karishma
#include "debug.hpp"
#else
#define debug(...)
#endif
using namespace std;

int main()
{
     int N,q;
     cin >> N >> q;

     map <string,ll> mp;

        for(int i=1; i<=N; i++)
        {
             string x; 
             cin >> x;
             ll y; 
             cin >> y;
             mp[x] = y;   
        }
    

        while(q--)
        {
        int a;
        cin>>a;

        string s;
        cin>>s;  
        

        if(a == 1)
        {  
        ll y;cin>>y;
         mp[s]+=y;;
         
        }
       

        else 
        if( a == 2)
        {
            cout << mp[s] <<endl;
        }
    }
    
    debug(mp);
}