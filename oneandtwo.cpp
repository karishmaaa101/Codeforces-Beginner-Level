#include <bits/stdc++.h>
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
          cin >> n;
          int c = 0;
          vector<int> v(n);
          for(int i=0;i<n;i++)
          cin>>v[i];
          
          for(int i=0;i<n;i++)
          {
            
            if(v[i]==2)
            c++;
          }
          if(c == 0)
          cout << 1 << endl;
          else if(c%2 == 0)
          {
            int c2=0;
            for(int i=0;i<n;i++)
            {
                if(v[i] == 2)
                c2++;

                if(c2 == c/2)
                {
                cout << i+1 << endl;
                break;
                }
            }
          }
          else
          cout << -1 << endl;
     }
}