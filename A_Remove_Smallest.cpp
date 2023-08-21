/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        sort(a,a+n);
        bool flag=false;

        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                flag=true;
                cout << "NO" << endl;
                break;
            }
        }
        if(flag== false)
        cout << "YES" <<endl;
    }
}
*/

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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) > 1)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}