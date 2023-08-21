#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;

    if (n == r || r == 0)
        return 1;

    // return nCr(n-1,r-1) + nCr(n-1,r);
    return fact(n) / (fact(r) * fact(n - r));
}

signed main()
{
    fast;

    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << " " << nPr(n, r);
}

/*#include<iostream>
#define int long long
using namespace std;
int facto(int num)
{
     int fact=1;
    for( int i=1;i<=num;i++)
    {
          fact *= i;
    }
      return fact;
}
 int ncr(long  n, int r)
 {
    return facto(n) / (facto(r) * facto(n - r));
}
 int npr( int n, int r) {
    return facto(n) / facto(n - r);
}

int main()
{     int A, B;
    //cout << "Enter two numbers A and B: ";
    cin >> A >> B;
    cout << nCr(A, B) <<" "<<nPr(A, B) <<endl;

return 0;
}*/