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
        string s; cin >> s;
        int  count = 0;
        for(int i = 0 ; i < s.size();i++)
        {
            if(s[i] != 'a')
            {
                count ++;
            break;
            }
        }
        if(count == 0)
        cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            string new1 = 'a' + s ;
            string new2 = new1;
            reverse(new2.begin(),new2.end());
            if(new1 == new2)
            cout << s+'a' << endl;
            else
            cout << new1 << endl;
           
        }
        

        
    }
}