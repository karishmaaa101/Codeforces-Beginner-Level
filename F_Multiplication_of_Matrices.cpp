#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    int r1, c1;
    cin >> r1 >> c1;
    int a1[r1][c1];
    for(int i=0; i<r1 ;i++)
    {
        for(int j=0; j<c1 ;j++)
        {
            cin >> a1[i][j];
        }
    }
     int r2,c2;
     cin >> r2 >> c2;
    int a2[r2][c2];
    for(int i=0; i<r2 ;i++)
    {
        for(int j=0; j<c2 ;j++)
        {
            cin >> a2[i][j];
        }
    }

    int arr[r1][c2];
    for(int i=0; i<r1 ;i++)
    {
        for(int j=0; j<c2 ;j++) 
        arr[i][j]=0;
    }


    for(int i=0; i<r1 ;i++)
    {
        for(int j=0; j<c2 ;j++)
        {
             arr[i][j] = 0;
            for(int k = 0; k < c1; k++)
                  arr[i][j] += a1[i][k]*a2[k][j];
        }
    }
    

    for(int i=0; i<r1 ;i++)
    {
        for(int j=0; j<c2 ;j++)
        {
        cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }

}
