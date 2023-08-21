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
        int n;cin>>n;
       
        string s;
        cin>>s;
         int x=0,y=0;
        bool flag=false;
        for(auto c:s)
        {
            if(c=='L')
            x--;
            if(c=='R')
            x++;
            if(c=='U')
            y++;
            if(c=='D')
            y--;

            if(x==1 && y==1)
            flag=true;
            
        }
        if(flag == true)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
}