#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    int cnt=st.count(8);
    cout<<cnt;
    auto it2=st.find(3);
    auto it3=st.find(6);

    auto it4=st.lower_bound(1);
    auto it5=st.upper_bound(6);
    st.erase(it4,it5);

    for(auto it: st)
    {
        cout<<it<<endl;
    }
    return 0;
}
