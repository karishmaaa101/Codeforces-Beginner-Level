#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

/*signed  main()
{
    fast;
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);
         int ans=0;
        for(int i=0; i<n; i++) 
        {
            cin >> v[i];
            ans += v[i];
        }
        if ( ans == n) 
        ans -=4;

        for(int i=0; i<n-1; i++)
        {
            if(v[i]==-1 and v[i+1]==-1)
            {
                ans+=4;
                break;
            }
        }
        cout <<  ans << endl;
    }
}*/


signed  main()
{
    fast;
    int t;cin >> t;
    while(t--)
    {
     int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    int maxi = -1e9;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
 
    int temp = sum;
 
    for (int i = 0; i < n-1; i++) 
    {
        sum = temp;
        if (v[i] == 1 && v[i+1] == 1) 
        {
            sum -= 4;
        }
        else if (v[i] == -1 && v[i+1] == -1)
         {
            sum += 4;
        }
        else if (v[i] == -1 && v[i+1] == 1) 
        {
            sum += 0;
        }
        else if (v[i] == 1 && v[i+1] == -1) 
        {
            sum += 0;
        }
        maxi = max(maxi, sum);
    }
 
    cout << maxi << endl;
    }
}
