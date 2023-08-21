#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

    using namespace std;
    
    signed main ()
    {
    fast;
    int t;cin >> t;
    while(t--)
    {
        string s;cin >>s;
        bool flag = true;


        for(int i=1;i<s.length();i++)
        {
            if(s[i]!=s[0])            
            {
                flag = false;
                break;
            }
        }


        if(flag)
       cout << -1 << endl;
       else
       cout << s.length()-1 << endl;
    }
    }