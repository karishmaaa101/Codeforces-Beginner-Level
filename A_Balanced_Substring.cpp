#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        string s;cin >> s;

        bool flag = false;
        
        

        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
            cout << i+1 <<" "<< i+2 << endl;
            flag = true;
            break;
            }
        
        }
        if(flag ==  false)
            cout << -1 << " " << -1 << endl;
        
        
    }
}
