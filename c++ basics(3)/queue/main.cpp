#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.pop();
    cout<<q.top();
    cout<<q.size();
    return 0;
}
