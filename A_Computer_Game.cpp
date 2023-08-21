/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;

        string s[2];
        string res = "YES";
        for(int i=0; i<2;i++)
        cin >> s[i];

        for(int i=1;i<n;i++)
        {
            if(s[0][i]== '1' and s[1][i]== '1')
            {
            res = "NO";
            break;
            }
        }

        cout << res << endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        bool flag = true;

        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] == '1' and s2[i]== '1')
            {
                flag = false;
            }
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }
}

