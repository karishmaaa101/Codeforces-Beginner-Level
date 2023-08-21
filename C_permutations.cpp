#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
 
signed main()
{
                 ios_base::sync_with_stdio(0); cin.tie(nullptr);
                 
                 int n, q;
                 cin >> n >> q;
                 string s;
                 cin >> s;
                
                while(q--)
                {
                    string t;
                    cin >> t;
                    int x;
                    cin >> x;
                    
                     if(t == "next_permutation")
                     {
                        while( x > 0 )
                        {
                        next_permutation(s.begin(),s.end());
                        x--;
                        }
                        cout << s << endl; 
                     }
                     if(t == "prev_permutation")
                     {
                       while( x > 0 )
                        {
                        prev_permutation(s.begin(),s.end());
                        x--;
                        }
                        cout << s << endl; 
                     }
                }
}