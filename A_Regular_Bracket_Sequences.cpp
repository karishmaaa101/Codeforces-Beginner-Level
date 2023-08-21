#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;




signed main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        for(int i=1;i<=n ;i ++ )
        {
            for(int j = 1 ;j <=i ;j ++)
            cout << "(";
            for(int j = 1 ;j <=i ;j ++)
            cout << ")";
            for(int j = 1 ;j <=n-i ;j ++)
            cout << "()" ;
            cout << endl;

        }
        
    }
}