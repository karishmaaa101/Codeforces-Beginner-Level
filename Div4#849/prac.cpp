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
        int l,r;
        cin>>l>>r; 
        
        if(2*l<=r)
        cout<<l<<" "<<2*l<<endl;
        else
        cout<<-1<<" "<<-1<<endl;
     }
}

