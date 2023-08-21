#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

    using namespace std;
    
    signed main ()
    {
    fast;
    int t;
    cin>>t;
  
    
    while(t--)
    {
        int n , m ,x;
        cin >> n >> m >> x;
        int R,C;
        
        if(x%n==0)
        {
            R=n;
            C=x/n;;
        }
        
        else
        {
            C=(x/n)+1;
            R=x%n;
        }
        
        int res=(R-1)*m+C;
        
        cout<<res<<endl;
    }
}























/*
    int t;cin >> t;
    while(t--)
    {
        int n,m,x; cin >> n >> m >> x;
        double dn ,dm,dx; cin >> dn >> dm >> dx;
        dn = n;
        dm = m;
        dx = x;
        int res1=0, res2=0;
        double c = ceil(x/dn);
          int row = x%n;
        if(row ==0)
        {
             
            row = n;
        }

         res1 = (row-1)*m;
         res2 = res1 + c;
        cout << res2 << endl;

    }
    }*/