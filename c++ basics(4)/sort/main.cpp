#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}
