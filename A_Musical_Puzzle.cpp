#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        string s;cin >> s;
        set<string>st;
        
        
        for(int i=0;i<n-1;i++)
        {
            string temp = "";   
            temp +=s[i];
            temp +=s[i+1];
            st.insert(temp);
        }
        cout << st.size() << endl;
    }
}