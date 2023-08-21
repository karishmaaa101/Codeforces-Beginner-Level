#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


bool isPrime(int x)
{
    if(x<=1) 
    return false;
    
    for(int i=2;i*i<=x;i++)

    if(x%i == 0) 
    return false;
    return true;

}

signed main()
{
    fast;
    int x;
    cin >> x;
    int temp = x;

    /*for(int i = temp;;temp++)
    {
        if(isPrime(temp))
        {
            cout << temp << endl;
            break;
        }
    }*/

    while(!isPrime(temp))
    temp++;
    cout << temp << endl;
   
}