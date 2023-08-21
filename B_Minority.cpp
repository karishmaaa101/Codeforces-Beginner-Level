#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int zeroes = 0 , ones = 0 ;
        for(int i=0; i<=s.length()-1;i++)
        {
            if(s[i] == '0')
            zeroes ++ ;
            else
            ones ++;

        }
        //string sub= s.substr(1,s.length());
        
        if(zeroes==ones) 
        cout<< ones-1 << endl;                       
        else 
        cout<<min(zeroes,ones) << endl; 

        
    }
    
}
