#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


/*  5!= log(5)+ log(4) +log(3) + log(2) + log(1) 
      = 2.078
      so we will convert it to int,as ans is in double and increment by 1 
      which is
      ans=ans+log10(i) 
      result =(int) ans +1 
      or simply 
      res = ceil(ans) */

signed main()
{
    int n; cin >> n;
    double ans=0; 

    for( int i=1;i<=n;i++)
    {
           ans+=log10(i);
    }
    int res=(int)ans;
    cout << "Number of digits of "<< n <<"! is " << res+1; //ceil(ans) 
}
