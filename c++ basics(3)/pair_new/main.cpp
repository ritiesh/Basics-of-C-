#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={1,{1,3}};
    cout<<p1.first<<" "<<p1.second.first<<endl;
    pair<int,int> arr[]={{1,3},{2,3}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
     pair<pair<int,int>,pair<int,int>>p4={{1,4},{1,3}};
     cout<<p4.first.second<<" "<<p4.second.first<<endl;
    return 0;
}
