#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


int sum(int n)
{
    return (n*(n+1)/2);
}
signed main()
{
    int a,b;
    cin >> a >> b;
    
    if(a>b)
    {
    swap(a,b);
    }
  
    int totalsum=sum(b)-sum(a-1);

    cout << totalsum << endl;
    int evensum = 2* sum(b/2) - 2* sum((a-1)/2);
    cout << evensum << endl;
    int oddsum = totalsum-evensum;
    cout << oddsum << endl;
    
   

}
