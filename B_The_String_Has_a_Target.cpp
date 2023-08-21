#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;


signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s;cin >> s;
        int pos = -1;
        char x = s[0];
        for(int i=1; i < n;i++)
        {
            if(s[i] <= x)
            {
                 x = s[i];
                 pos = i;
            }
        }
            if(pos == -1)
            {
                cout << s << endl;
            }
            else
            {
                cout << s[pos];
                cout << s.substr(0,pos) << s.substr(pos+1) << endl;

            }
        
    }
}