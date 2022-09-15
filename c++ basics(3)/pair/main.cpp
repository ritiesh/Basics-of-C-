#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,int>p={3,1};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>l={1,{3,4}};
    cout<<l.first<<" "<<l.second.first<<" "<<l.second.second<<endl;
    pair<pair<int,int>,pair<int,int>>o={{1,3},{2,4}};
    cout<o.first<<endl;//<<" "<<o.first.second<<" "<<o.second.first;
    pair<int,int>arr[]={{1,34},{4,5},{6,6}};
    cout<<arr[2].second<<endl;
    return 0;
}
