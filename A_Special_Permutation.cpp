#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        cout << n << " ";
        for(int i=0;i<n-1;i++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}