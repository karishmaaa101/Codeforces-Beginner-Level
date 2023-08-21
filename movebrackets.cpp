#include <bits/stdc++.h>
#define endl '\n'
#define int long long
 
using namespace std;
 
signed main() 
{
	ios :: sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
    
	 while(t--)
  {
        int n;
        cin>>n;
        string s;
        cin>>s;
       
        int count=0,x=0;
        for(int i=0;i<n;i++)
        {
        
        if(s[i]== '(')
        x++;
        
        else
            {
        if(x>0)
        x--;
        else
       count++;
             }
          }
              
        
        cout<<count<<endl;
  }
}