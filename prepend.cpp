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
		 int temp=n;
		 for(int l=0,r=n-1; l<r; l++,r--)
		 {
			 if(s[l]!=s[r])
			 temp=temp-2;
			 else
			 break;
		 }
		 cout<<temp<<endl;
 
	 }
}