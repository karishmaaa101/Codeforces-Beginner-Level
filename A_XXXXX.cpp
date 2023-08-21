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
    int t ; cin >> t ;
    for (;t--;)
    {
        int n, x, a, totalSum = 0;
        cin >> n >> x ;
        int l = -1 ;
        int r = n - 1 ;
        for (int i = 0; i < n; i++)
        {
            cin >> a ;
            if (a % x != 0)
            {
                if (l == -1)
                {
                    l = i ;
                }
                r = i ;
            }
            totalSum += a;
        }

            if (totalSum % x != 0)
            {
                cout << n << endl;
            }

            else if (l == -1){
                cout << -1 << endl;
            }

            else
            {
                cout << n - min(l + 1, n - r) << endl;
            }
        
    }
    return 0;
}
