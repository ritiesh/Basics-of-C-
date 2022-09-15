#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2];
    vector<pair<int,int>>a;
    a.push_back({1,2});
    a.emplace_back(1,2);
    cout<<a[0].second;
    vector<int>r(5,100);
    for(int i=0;i<5;i++)
    {
        cout<<r[i]<<endl;
    }
    vector<int>d(r);
    for(int i=0;i<5;i++)
    {
        cout<<d[i]<<endl;
    }
    d.push_back(2);
    cout<<d[5];
    d.emplace_back(3);
    cout<<d[6];

    return 0;
}
