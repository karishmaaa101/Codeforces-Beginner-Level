#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;


signed main()
{
    int n , m ,ans,temp;
    cin >> n >> m;
    vector<int> v(m);

    for(int i=0;i<=m;i++)
    cin >> v[i];

    sort(v.begin(),v.end());
   
    int diff= v[n-1]-v[0];

    for(int i=0; i <= m-n; i++)
    {
      
      if(v[n+i-1] - v[i] < diff)
        diff = v[n+i-1] - v[i];
    }
    cout << diff << endl;


    
}