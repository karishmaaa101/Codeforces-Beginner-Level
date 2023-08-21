#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


int sum(int n)
{
    return (n*(n+1))/2;
}

/*signed main()
{
    fast;
    int a,b,x;
    cin >> a >> b >> x;
    int xx1 =max(a,b);
    int xx2 =min(a,b);
    int ans = (x * sum (xx1/x))-(x* sum( (xx2-1)/x));
    cout<< ans << endl;
}*/

signed main()
{
    fast;
    int a,b,x;
    cin >> a >> b >> x;
    if(a>b) 
    swap(a,b);
    int ans = (x*sum(b/x))-(x*sum((a-1)/x));
    cout << ans << endl;
}





/*signed main()
{
    fast;
    int a, b, x;
    int ans=0;
    cin >> a >> b >>x;
    for(int i = a; i <=b ;i++)
    {
        if(i%x == 0)
        ans+=i;
    }
    cout << ans<< endl;
}*/

