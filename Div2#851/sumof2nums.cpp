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
 
/*signed main() 
{
	ios :: sync_with_stdio(false);cin.tie(NULL);
	int tt;
	cin>>tt;
    
    while(tt--)
    {
        int n;
        cin>>n;               
        string s=to_string(n);
        int a=0,b=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            int x = s[i]-'0';  // as char - '0' gives char itself (num)
            if(x % 2 == 0)    
            {
                a*=10;       
                b*=10;       
                a+=x/2;      
                b+=x/2;        
            }
            else 
            {
                if(count == 0)      
                {
                    a*=10;         
                    b*=10;
                    a+=(x/2)+1;     
                    b+=x/2;         
                }
                else
                {
                    a*=10;
                    b*=10;
                    a+=(x/2);
                    b+=(x/2)+1;
                }                  
                count = 1 - count;
            }
            n/=10;            
        }
        cout<<a<<" "<<b<<endl;  
         
    }
}
*/

signed main()
{
    ios :: sync_with_stdio(false);cin.tie(NULL);
	int tt;
	cin>>tt;
    
    while(tt--)
    {
        int n;
        cin>>n;
        int a=0,b=0;

        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            int c=(s[i]-'0')/2;

            a=a*10+c;
            b=b*10+c;

            if((s[i]-'0')%2)
            {
                a++;
                swap(a,b);
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}