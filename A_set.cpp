#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
         if (str == "lower_bound")
        {
            int x;
            cin >> x;
            auto i =s.lower_bound(x);
            if(i == s.end())
            cout<<"-1"<<endl;
            else
            cout << *i << endl;
           
            
        }
        else if (str == "upper_bound")
        {
          int x;
            cin >> x;
            auto i = s.upper_bound(x); 
            if(i == s.end())
            cout<<"-1"<<endl;
            else  
            cout << *i << endl; 
            
        }
        else if(str == "insert")
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if(str == "find")
        {
            int x;
            cin >> x;
            auto pos = s.find(x);
            if(pos!=s.end())
            cout << "found" <<endl;
            else
            cout << "not found "<<endl;
           
        }
        

    }
}