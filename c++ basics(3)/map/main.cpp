#include <bits/stdc++.h>


using namespace std;

int main()
{
 map<int,int>mpp;
 mpp[1]=30;
 mpp.insert({2,4});
 mpp.insert({5,7});
 for(auto it=mpp)
 {
     cout<<it<<endl;
 }
 map<pair<int,int>,int>f;
 f[{2,3}]=10;

}
