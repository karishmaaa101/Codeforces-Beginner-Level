#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                     \
   ios_base::sync_with_stdio(0); \
   cin.tie(nullptr);
using namespace std;

signed main()
{
   fast;

   int q;
   cin >> q;
   priority_queue<int, vector<int>, greater<int>> p;
   priority_queue<int> pq;
   while (q--)
   {
      string t;
      cin >> t;
      if (t == "push")
      {
         int x;
         cin >> x;
         pq.push(x);
      }
      else if (t == "pop")
      {
         pq.pop();
      }
      else if (t == "top")
      {
         cout << pq.top() << endl;
      }
   }
}