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
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>>a(n),b(n);  //pair of vectors
        for(int i = 0 ;i<n;i++)
        {
            cin >> a[i].first;
            a[i].second = i;
            
        }
        for(int i = 0 ;i<n;i++)
        {
            cin >> b[i].first;
            b[i].second = i;
            
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[a[i].second]=b[i].first;
        }
        for(auto i:ans)
        cout << i << " " ;
        cout <<  endl;
    }
}