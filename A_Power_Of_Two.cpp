#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
   fast;
   int n;
   cin >> n;
   
   if ((n & (n-1)) == 0)
   cout << "YES" << endl;
   else cout << "NO" <<endl;

}