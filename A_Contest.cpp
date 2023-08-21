#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int m1 = (3*a)/10;
    int m2 = a -(a/250)*c;

    int v1= (3*b)/10;
    int v2= b -(b/250)*d;

    int res1 = max(m1,m2);
    int res2 = max(v1,v2);

if (res1 > res2)
cout << "Misha" << endl;
else if( res1 < res2)
cout << "Vasya" << endl;
else
cout << "Tie" << endl;

}