#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;



signed main()
{
    int a , b ,q;
    cin >> a >> b >> q;

    int ans =q%3;
    if(ans == 1)
    {
    cout << a;
    }

    else
    
    if(ans == 2)
    cout << b;
    
    else
    
    cout << (a^b);
    
}

/*signed main()
{
    int a , b ,q;
    cin >> a >> b >> q;
    int f[q+1] = {0};
    f[0] = a;
    f[1] = b;
    set<int>s;
    s.insert(f[0]);
    s.insert(f[1]);
    for (int i=2; i<q;i++)
    {
        f[i] = f[i-1]^f[i-2];
        if(s.count(f[i]) == 0)
        {
            s.insert(f[i]);
        }
        else 
        break;
    }
    int k=s.size();
    cout << f[(q-1)%k] << endl; 
    
}*/