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
        
        if((n&(n-1)) == 0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
}








/*signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
            while (n >= 1)
            {
                if (n % 2 != 0 and n != 1)
                    break;
                    n /= 2;
            }
        
            if (n % 2 != 0)
            cout << "YES" << endl;
            else
             cout << "NO" << endl;
        
    }
}*/
