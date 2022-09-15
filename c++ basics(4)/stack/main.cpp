#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);
    stack<int>st1;
    st1.swap(st);
    cout<<st1.size();

}
