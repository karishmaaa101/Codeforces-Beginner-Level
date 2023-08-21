#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while(q--) {
      
    string ss;
    cin >> ss;

    if(ss=="pop_back")
      s.pop_back();
    
    else if(ss=="front")
      cout<<*s.begin()<<endl;

    else if(ss== "back")
       cout<<s.back()<<endl;

    else
    if(ss=="sort") {
        int l,r;
        cin>>l>>r;
        if(l>r)
        swap(l,r);
      sort(s.begin() + l - 1,s.begin() + r);
    }

    else if(ss == "reverse")
    {
        int l,r;
        cin>>l>>r;
        if(l>r)
        swap(l,r);
    reverse(s.begin() + l - 1, s.begin() + r);
    }

    else if(ss == "print")
    {
    int i;cin>>i;
    cout<<s[i-1]<<endl;
    }

    else if(ss == "substr") {
        int l,r;
        cin>>l>>r;
        if(l>r)
        swap(l,r);
    cout<<s.substr(l-1,r-l+1)<<endl;
    }
    else
    
    if(ss == "push_back")
    {
        char x;
        cin>>x;
        s.push_back(x);
    }
}

}