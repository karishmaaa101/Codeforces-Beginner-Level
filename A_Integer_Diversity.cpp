#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

    using namespace std;
    
    signed main ()
    {
    fast;
    int t;cin >> t;
    while(t--)
    {
     
         map<int,int>m;
         int n;cin >> n; 
         for(int i=0;i<n;i++)
         {
         int x;cin >> x;
         if(x<0)   //taking only positive number in map
         x=-x;
         m[x]++;
         }

        int count = 0;
        for(auto i : m )
        {
         if(i.second>1 and i.first!=0)  //if (occurence > 1 and element is not equal to 0)
         {
            count +=2;                  //increase count by 2
           
         }
            else
            count +=1;                  // increase count by 1
         }
         cout << count << endl;

    }
    }
    