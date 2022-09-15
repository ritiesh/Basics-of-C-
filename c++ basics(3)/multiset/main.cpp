#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.emplace(10);
    s.emplace(6);
    s.insert(8);
    for(auto it:s)
    {
        cout<<it<<endl;
    }
    //s.erase(s.find(1),s.find(1));
    //int c=s.count(1);
    //cout<<c<<endl;

    return 0;
}
