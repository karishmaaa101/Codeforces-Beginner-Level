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
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << "0" << endl;

        else if (abs(a - b) % 10 == 0)
            cout << abs(a - b) / 10 << endl;

        else
            cout << abs(a - b) / 10 + 1 << endl;
    }
}
