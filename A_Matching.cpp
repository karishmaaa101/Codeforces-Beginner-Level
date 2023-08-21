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
    for (; t--;)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ans = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '?')
                ans *= 10;
        }

        if (s[0] == '0')
            ans = 0;

        else if (s[0] == '?')
            ans *= 9;
    
    cout << ans << endl;
    }
}