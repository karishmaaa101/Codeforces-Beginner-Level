#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

int sum(int n)
{
    return (n * (n + 1)) / 2;
}

signed main()
{
    int n;
    cin >> n;
    int low = 1, high = 5*(int)sqrt(n), mid;
    int output = -1, ans;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        ans = sum(mid);
        // cout << ans << endl;

        if (ans > n)
        {
            high = mid - 1;
        }
        else
        {
            output = mid;
            low = mid + 1;
        }
    }
    cout << output << endl;
}