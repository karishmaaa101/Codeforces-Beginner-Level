#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

signed main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c;

        int half = abs(a - b) * 2;

        if (a > half or b > half or c > half)
            cout << -1 << endl;
            
        else
        {
            d = c + abs(a - b);
            if (d > half)
                d = c - abs(a - b);
            cout << d << endl;
        }
    }
}


