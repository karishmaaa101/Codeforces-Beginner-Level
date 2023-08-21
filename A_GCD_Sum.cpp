#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int SumOfDigits(int n)
{
    int s = 0;
    while (n > 0)
    {
       
        s += n % 10;
        n /= 10;
    }
        return s;
    
}

signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = SumOfDigits(n);

        while (true)
        {
            if (gcd(temp,n) > 1)
            {
               
                break;
            }
            else
            {
                n++;
                temp = SumOfDigits(n);
            }
        }
        cout << n << endl;
    }
}
