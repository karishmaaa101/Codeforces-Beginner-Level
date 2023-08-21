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
    while (t--)
    {
        int n;
        cin >> n;
        string ans;
        for (int j = 9; j >= 1; j--)
        {
            if (n >= j)
            {
                ans += (char)('0' + j);
                n -= j;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}