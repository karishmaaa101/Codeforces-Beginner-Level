#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()

{
    //12345=120%2=0
    //  1 5 2
    //1*2 % 2=0
    //0*3=0%2=0
    //0*4%2=0
    //0*5%2=0 
    

    int l,r,m;
    cin >> l >> r >> m;

    int ans=1;
    for(int i=l; i<=r; i++) 
    ans=(ans*i)%m;
    
    cout<<ans;


}