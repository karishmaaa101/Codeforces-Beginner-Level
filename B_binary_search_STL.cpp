#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

   vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    while( q--)
    {
        string s;
        cin >> s;
        
        if(s == "binary_search")
        {
            int x; cin >> x; 
            if(binary_search(v.begin(),v.end(),x))
            {
                
                cout << "found" << endl;
            }
            else
            {
                cout <<"not found" << endl;
            }
        }
        else
        if( s == "lower_bound")
        {
            int x; cin >> x;
            auto it = lower_bound(v.begin(),v.end(),x);
            if( it != v.end())
            {
                cout << *it << endl;

            }
            else
            {
                cout << -1 << endl;
            }


        }
        if( s == "upper_bound")
        {
            int x; cin >> x;
            auto it = upper_bound(v.begin(),v.end(),x);
            if( it != v.end())
            {
                cout << *it << endl;

            }
            else
            {
                cout << -1 << endl;
            }


        }


    }
}