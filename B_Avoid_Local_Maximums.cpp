#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int t;cin >> t;
    while (t--)
    {
        int n,op= 0;
        cin >> n;
         int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <n-1;i++)
        {
            if (arr[i] > arr[i-1] and arr[i] > arr[i+1])
            {
                if (i+2 >= n)
                {
                    arr[i+1] = arr[i];
                    op++;
                }
                else
                {
                    arr[i+1] = max(arr[i], arr[i+2]);
                    op++;
                }
            }
        }
        cout << op << endl;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}



signed main()
{
    int t;cin >> t;
    while(t--)
    {
      int n;
      cin>>n;
 
      vector<int>vec(n);
 
      for(int i=0; i<n; i++) cin>>vec[i];
 
     int op=0;
      for(int i=1; i<n-1; i++)
      {
        if(vec[i]>vec[i-1] and vec[i]>vec[i+1])
        {
            if(i+2<n) vec[i+1]=max(vec[i],vec[i+2]);
 
            else vec[i]=vec[i-1];
 
            op++;
        }
      }
 
      cout<<op<<endl;
 
      for(int i=0; i<n; i++) cout<<vec[i]<<" ";
 
      cout<<endl;
    }
}
