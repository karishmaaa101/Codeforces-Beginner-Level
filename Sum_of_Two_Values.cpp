
#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*int main()
{
      int n, x;
      cin >> n >> x;
      bool flag = 0;

      vector<int> v(n);
      for (auto &it : v)
            cin >> it;

      vector<pair<int, int>> pp;

      for (int i = 0; i < n; ++i)
      {
            pp.push_back(make_pair(v[i], i + 1));
      }
      sort(pp.begin(), pp.end());

      int ptr1 = 0, ptr2 = n - 1;
      while (ptr1 < ptr2)
      {

            if (pp[ptr1].first + pp[ptr2].first < x)
                  ptr1++;
            else

                if (pp[ptr1].first + pp[ptr2].first > x)
                  ptr2--;

            else if (pp[ptr1].first + pp[ptr2].first == x)
            {
                  cout << pp[ptr2].second << ' ' << pp[ptr1].second << endl;
                  exit(0);
            }
      }
      cout << "IMPOSSIBLE\n";
}
*/
// for(auto &i: pp)
//  cout << i.first << ' ' << i.second << '\n';


int main()
{
    
    
    ll n,x;
    
    cin>>n>>x;
    
    ll a[n];
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    map<int,int>mp;
    
    ll pos1=-1,pos2=-1;
    
    bool flag=false;
    
    for(int i=0; i<n; i++)
    {
        if(mp.find(x-a[i])!=mp.end())
        {
            pos1=i+1;
            pos2=mp[x-a[i]];
            flag=true;
        }
        
        mp[a[i]]=i+1;
    }
    
    if(flag and pos1!=pos2) cout << pos2 << " " << pos1;
    
    else cout<<"IMPOSSIBLE";
}