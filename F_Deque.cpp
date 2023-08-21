#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  deque<int>dq;
  while(q--)
  {
    string s;
    cin>>s;

    if(s == "push_back")
    {
    int x;
    cin>>x;
    dq.push_back(x);   
    } 
    else if(s == "push_front")
    {
        int x;
        cin>>x;
        dq.push_front(x);
    }
    else if(s == "pop_front")
    dq.pop_front();
    
    else if(s == "pop_back")
    dq.pop_back();

    else if(s == "front")
    cout<<dq.front()<<endl;
    
    else if(s == "back")
    cout<<dq.back()<<endl;

    else if(s == "print")
    {
        int x;
        cin>>x;

    cout<<dq[x-1]<<endl;
    }

}
}