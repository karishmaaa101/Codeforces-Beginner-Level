#include <bits/stdc++.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vin(x, v)      \
     for (auto &x : v) \
          cin >> x;
#define vout(x, v)    \
     for (auto x : v) \
          cout << x << " ";
#define endl '\n'
#define int long long
 
using namespace std;
 
signed main() 
{
	ios :: sync_with_stdio(false);cin.tie(NULL);
	int tt;
	cin>>tt;
    
	 while(tt--)
	 { 
     int n;
     cin>>n;
     int count=0;
     vector<int>vec(n);
     for(int i=0;i<n;i++)
     cin>>vec[i];

     for(int i=0;i<n;i++)
     {
     if(vec[i]==1)
     count++;
     }
     int rem=n-count;
     
     cout << rem+(count+2-1)/2 << endl;
      

     }

     
}