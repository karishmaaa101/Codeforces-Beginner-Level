/*#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            if (i == n / i)
                ans += i;
            else
                ans += i + n / i;
        }
    }

    cout << ans << endl;
}*/
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                ans += i;
            }
            else
            {
                ans += i;
                ans += n / i;
            }
        }
    }
    cout << ans << endl;
}