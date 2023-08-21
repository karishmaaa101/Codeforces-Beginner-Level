#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] % 2 == 0)
                even += vec[i];
            else   
            odd += vec[i];
        }
        if (even > odd)
            cout << "YES" << endl;
        
        else
            cout << "NO" << endl;
        
    }
}