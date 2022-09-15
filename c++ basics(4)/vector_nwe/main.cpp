#include <bits/stdc++.h>


using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.emplace_back(3);
    vector<int>v2(2,500);
    v.erase(v.begin());
    v.insert(v.begin(),2,500);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    v.insert(v.begin(),v2.begin(),v2.end());
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<v.size();
    v.clear();
    cout<<v.empty();
    return 0;
}


