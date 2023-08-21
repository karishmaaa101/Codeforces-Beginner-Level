#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
 
signed main()
{
                 ios_base::sync_with_stdio(0); cin.tie(nullptr);
                 string s;
                 cin >> s;
                 map<char,int>mp;
                 for(int i=0; i<s.length();i++)
                 {
                   mp[s[i]]++;
                 }
                 for(auto it:mp)
                 cout << it.first << " " << it.second <<endl;
}