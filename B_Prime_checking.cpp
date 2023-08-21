#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int n;cin >> n;
    int c=0;

   if( n == 1) 
    {
    cout << "NO" << endl;
    return 0;
    }
   
    for(int i=2; i*i<=n;i++)
    {
        if(n%i == 0)
        {
            c++;
        }
    }
    if(c == 0)
    cout << "YES" <<endl;
    else
    cout << "NO" <<endl;

}