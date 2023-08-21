//https://www.youtube.com/watch?v=jzBLsU6iBho

#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
    double a = sqrt(n);
    if(a - floor(a) == 0)
    return true;
    else
    return false;
    
}

int main()
    {  
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
             
             if(n%2 == 0 && isPerfect(n/2) || (n%4 == 0 && isPerfect(n/4)))
             {
             cout<<"YES"<<endl;
             continue;
             }
             else
             cout<<"NO"<<endl;
        }
    }
